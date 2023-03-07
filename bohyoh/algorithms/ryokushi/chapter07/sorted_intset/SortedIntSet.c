#include <stdio.h>
#include <stdlib.h>
#include "SortedIntSet.h"

/*--- 集合の初期化 ---*/
int Initialize(SortedIntSet *s, int max)
{
    s->num = 0;
    if ((s->set = calloc(max, sizeof(int))) == NULL) {
        s->max = 0;
        return -1;
    }
    s->max = max;
    return 0;
}

/*--- 要素の探索 ---*/
/*
 探索成功時は1を、失敗時は0を返す
 posには2分探索終了時のインデックスを設定する
*/
int BinarySearch(const SortedIntSet *s, int n, int *pos) 
{
    int left = 0;
    int right = s->num - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (n > s->set[mid]) {
            left = mid + 1;
        } else if (n < s->set[mid]) {
            right = mid - 1;
        } else {
            *pos = mid;
            return 1;
        }
    }
    if (s->num == 0) 
        *pos = 0;
    else
        *pos = left > right ? right + 1 : left - 1;
    return 0;
}

/*
集合sにnが入っているか
・入っている場合はそのindexを
・入っていない場合は-1
を返す
*/
int IsMember(const SortedIntSet *s, int n)
{
    int i;
    for (i = 0; i < s->num; i++)
        if (s->set[i] == n)
            return i;
    return -1;
}

/*
集合sにnを追加
sの要素数が容量より小さく、かつnがsに含まれない場合、
nを配列の末尾に追加
*/
void Add(SortedIntSet *s, int n)
{
    int i;
    int pos;
    int success = BinarySearch(s, n, &pos);
    // printf("%d番目に挿入\n", pos);
    if (s->num < s->max && success == 0) {
        for (i = s->num - 1; i >= pos; i--) {
            s->set[i + 1] = s->set[i];
        }
        s->set[pos] = n;
        s->num++;
    }
}

/*
集合sからnを削除
nがsに含まれる場合、nを削除。
削除した位置に、末尾の要素を移動。
*/
void Remove(SortedIntSet *s, int n)
{
    int i;
    int pos;
    int success = BinarySearch(s, n, &pos); 
    if (success) {
        for (i = pos; i < s->num - 1; i++) {
            s->set[i] = s->set[i + 1];
        }
        s->num--;
    }
}

/*-- 集合sが格納できる最大の要素数 ---*/
int Capacity(const SortedIntSet *s)
{
    return s->max;
}

/*--- 集合sの要素数 ---*/
int Size(const SortedIntSet *s)
{
    return s->num;
}

/*--- 集合が満杯であれば1を、満杯でなければ0を返す ---*/
int IsFull(const SortedIntSet *s)
{
    return Size(s) == Capacity(s);
}

/*--- 集合の全要素を削除する ---*/
void Clear(SortedIntSet *s)
{
    s->num = 0;
}

/*
集合s2をs1に代入
s2の要素数がs1の容量よりも大きい場合、s1の容量分のみ代入
s2の要素数がs1の容量以下の場合、s2の要素すべてをs1に代入
*/
void Assign(SortedIntSet *s1, const SortedIntSet *s2)
{
    int i;
    int n = (s1->max < s2->num) ? s1->max : s2->num; // コピーする要素数
    for (i = 0; i < n; i++) 
        s1->set[i] = s2->set[i];
    s1->num = n;
}

/*
集合s1とs2は等しいか
最悪の計算量
    s1->num * s2->num
線形検索となっているため、2つの要素数の積に比例して
速度が低下する

集合s1の要素がs2に見つかった場合、breakで抜けている。
for文を抜けた後、jとs2->numが等しければbreakで抜けて
いないことになり、s2の要素がs3にないことになるので
s2とs3が等しくないことを表す0を返す。

外側のfor文がすべて回ったらs2とs3が等しいとみなし1を返す。
*/
int Equal(const SortedIntSet *s1, const SortedIntSet *s2)
{
    int i;
    if (Size(s1) != Size(s2))
        return 0;
    for (i = 0; i < Size(s1); i++) 
        if (s1->set[i] != s2->set[i]) break;
    if (i = Size(s1)) return 1;
    else return 0;
}

/*
集合s2とs3の和集合をs1に代入
・s2をs1に代入(Assign(s1, s2))
・s3の各要素をs1に追加(Add(s1, s3->set[i]))
*/
SortedIntSet *Union(SortedIntSet *s1, const SortedIntSet *s2, const SortedIntSet *s3)
{
    int i;
    Assign(s1, s2);
    for (i = 0; i < s3->num; i++)
        Add(s1, s3->set[i]);
    return s1;
}

/*
集合s2とs3の積集合をs1に代入
s2とs3のすべての組み合わせをチェックし
等しいものがあればs1に追加。
等しくなった時点で内側のfor文をbreakした方が
効率はいいはず。
*/
SortedIntSet *Intersection(SortedIntSet *s1, const SortedIntSet *s2, const SortedIntSet *s3)
{
    int i, j;
    s1->num = 0;
    for (i = 0; i < s2->num; i++) {
        int pos;
        if (BinarySearch(s3, s2->set[i], &pos)) // 第3引数NULLがいいのかな？
            Add(s1, s2->set[i]);
    }
    return s1;
}

/*
集合s2からs3を引いた集合をs1に代入
s2とs3のすべての組み合わせを作り、
s2の要素がs3に見つかった場合、breakで内側のfor文を抜けている。
フラグを使用していないので、jがs3->numと等しければ、内側の
for文はbreakで抜けていないことになり、s2の要素がs3には存在
しないことが分かるのでs1にs2の要素を追加している。
*/
SortedIntSet *Difference(SortedIntSet *s1, const SortedIntSet *s2, const SortedIntSet *s3)
{
    int i, j;
    s1->num = 0;
    for (i = 0; i < s2->num; i++) {
        int pos;
        if (BinarySearch(s3, s2->set[i], &pos) == 0)
            Add(s1, s2->set[i]);
    }
    return s1;
}

/*--- 集合s2とs3の対称差をs1に代入する ---*/
SortedIntSet *SymmetricDifference(SortedIntSet *s1, const SortedIntSet *s2, const SortedIntSet *s3)
{
    int i;
    s1->num = 0;
    for (i = 0; i < s2->num; i++) {
        int pos;
        if (BinarySearch(s3, s2->set[i], &pos) == 0)
            Add(s1, s2->set[i]);
    }
    for (i = 0; i < s3->num; i++) {
        int pos;
        if (BinarySearch(s2, s3->set[i], &pos) == 0)
            Add(s1, s3->set[i]);
    }
    return s1;
}

/*--- 集合s1に対して集合s3の全要素を追加する ---*/
SortedIntSet *ToUnion(SortedIntSet *s1, const SortedIntSet *s2)
{
    int i;
    for (i = 0; i < s2->num; i++)
        Add(s1, s2->set[i]);
    return s1;
}

/*
 集合s1から集合s2に含まれない要素を削除する
 つまり、s1をs1とs2の積集合にする
*/
SortedIntSet *ToIntersection(SortedIntSet *s1, const SortedIntSet *s2)
{
    int pos, i = 0, count = s1->num;
    while (count > 0) {
        if (BinarySearch(s2, s1->set[i], &pos) == 0)
            Remove(s1, s1->set[i]);
        else
            i++;
        count--;
    }
    return s1;
}

/* 
集合s1から集合s2に含まれる要素を削除する
つまり、s1をs1からs2を引いた集合にする
*/
SortedIntSet *ToDifference(SortedIntSet *s1, const SortedIntSet *s2)
{
    int pos, i = 0, count = s1->num;
    while (count > 0) {
        if (BinarySearch(s2, s1->set[i], &pos))
            Remove(s1, s1->set[i]);
        else
            i++;
        count--;
    }
    return s1;
}

/*
集合s1がs2の部分集合であるかどうかを判定する
・部分集合である場合、1
・部分修道でない場合、0
を返す
*/
int IsSubset(const SortedIntSet *s1, const SortedIntSet *s2)
{
    int i;
    for (i = 0; i < s1->num; i++) {
        int pos;
        if (BinarySearch(s2, s1->set[i], &pos) == 0)
            return 0;
    }
    return 1;
}

/*
集合s1がs2の真部分集合であるかどうかを判定する
・真部分集合である場合、1
・真部分集合でない場合、0
を返す
*/
int IsProperSubset(const SortedIntSet *s1, const SortedIntSet *s2)
{
    return IsSubset(s1, s2) && Size(s2) > Size(s1);
}



/*--- 集合sの全要素を表示 ---*/
void Print(const SortedIntSet *s)
{
    int i;
    printf("{ ");
    for (i = 0; i < s->num; i++)
        printf("%d ", s->set[i]);
    printf("}");
}

/*-- 集合sの全要素を表示(改行付き) ---*/
void PrintLn(const SortedIntSet *s)
{
    Print(s);
    putchar('\n');
}

/*--- 集合の後始末 ---*/
void Terminate(SortedIntSet *s)
{
    if (s->set != NULL) {
        free(s->set);
        s->max = s->num = 0;
    }
}