/* int型集合IntSet(ヘッダ部) */

#ifndef ___IntSet
#define ___IntSet

/*--- int型の集合を実現する構造体 ---*/
typedef struct {
    int max;
    int num;
    int *set;
} IntSet;

/*--- 集合の初期化 ---*/
int Initialize(IntSet *s, int max);

/*--- 集合sにnが入っているか ---*/
int IsMember(const IntSet *s, int n);

/*--- 集合sにnを追加 ---*/
void Add(IntSet *s, int n);

/*--- 集合sからnを削除 ---*/
void Remove(IntSet *s, int n);

/*--- 集合sに格納できる最大の要素数 ---*/
int Capacity(const IntSet *s);

/*--- 集合sの要素数 ---*/
int Size(const IntSet *s);

/*--- 集合が満杯であれば1を、満杯でなければ0を返す ---*/
int IsFull(const IntSet *s);

/*--- 集合の全要素を削除する ---*/
void Clear(IntSet *s);

/*--- 集合s2をs1に代入 ---*/
void Assign(IntSet *s1, const IntSet *s2);

/*--- 集合s1とs2は等しいか ---*/
int Equal(const IntSet *s1, const IntSet *s2);

/*--- 集合s2とs3の和集合をs1に代入 ---*/
IntSet *Union(IntSet *s1, const IntSet *s2, const IntSet *s3);

/*--- 集合s2とs3の積集合をs1に代入 ---*/
IntSet *Intersection(IntSet *s1, const IntSet *s2, const IntSet *s3);

/*--- 集合s2からs3を引いた集合をs1に代入 ---*/
IntSet *Difference(IntSet *s1, const IntSet *s2, const IntSet *s3);

/*--- 集合s2とs3の対称差をs1に代入する ---*/
IntSet *SymmetricDifference(IntSet *s1, const IntSet *s2, const IntSet *s3);

/*--- 集合s1に対して集合s2の全要素を追加する ---*/
IntSet *ToUnion(IntSet *s1, const IntSet *s2);

/*
 集合s1から集合s2に含まれない要素を削除する
 つまり、s1をs1とs2の積集合にする
*/
IntSet *ToIntersection(IntSet *s1, const IntSet *s2);

/* 
集合s1から集合s2に含まれる要素を削除する
つまり、s1をs1からs2を引いた集合にする
*/
IntSet *ToDifference(IntSet *s1, const IntSet *s2);

/*
集合s1がs2の部分集合であるかどうかを判定する
・部分集合である場合、1
・部分修道でない場合、0
を返す
*/
int IsSubset(const IntSet *s1, const IntSet *s2);

/*
集合s1がs2の真部分集合であるかどうかを判定する
・真部分集合である場合、1
・真部分集合でない場合、0
を返す
*/
int IsProperSubset(const IntSet *s1, const IntSet *s2);

/*--- 集合sの全要素を表示 ---*/
void Print(const IntSet *s);

/*--- 集合sの全要素を表示(改行付き) ---*/
void PrintLn(const IntSet *s);

/*--- 集合の後始末 ---*/
void Terminate(IntSet *s);

#endif