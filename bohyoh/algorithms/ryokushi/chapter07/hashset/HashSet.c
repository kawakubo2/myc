#include <stdio.h>
#include <stdlib.h>
#include "HashSet.h"

#

/*--- 集合の初期化 ---*/
int Initialize(HashSet *s, int size)
{
    int i;
    s->size = size;
    s->num = 0;
    if ((s->hash = (Node **)malloc(sizeof(Node) * size)) == NULL) {
        s->size = 0;
        return -1;
    }
    for (i = 0; i < s->size; i++) {
        s->hash[i] = NULL;
    }
}

int calc_hash(const HashSet *s, int val)
{
    return val % s->size;
}

/*--- 集合sにnが入っているか ---*/
int IsMember(const HashSet *s, int n)
{
    int result = 0;
    Node *temp = s->hash[calc_hash(s, n)];
    while (temp != NULL) {
        if (temp->val == n) {
            result = 1;
            break;
        }
        temp = temp->next;
    }
    return result;
}

/*--- 集合sにnを追加 ---*/
void Add(HashSet *s, int n)
{
    if (!IsMember(s, n)) {
        int code = calc_hash(s, n);
        Node *new_node = (Node *)malloc(sizeof(Node));
        new_node->val = n;
        new_node->next = s->hash[code];
        s->hash[code] = new_node;
        // 要素数に1加算
        s->num++;
    }
}

/*--- 集合sからnを削除 ---*/
void Remove(HashSet *s, int n)
{
    int search_count = 0;
    Node *prev;
    int code = calc_hash(s, n);
    Node *temp = s->hash[code];
    while (temp != NULL) {
        if (temp->val == n) {
            if (search_count == 0) {
                s->hash[code] = temp->next;
            } else {
                prev->next = temp->next;
            }
            free(temp);
            s->num--;
            break;
        }
        search_count++;
        prev = temp;
        temp = temp->next;
    }
}

/*
 * 集合sに格納できる最大の要素数 
 * 衝突時、リハッシュではなくLinkedList
 * を使用しているため、容量は不明。
 * 0を返す。
 */
int Capacity(const HashSet *s)
{
    return 0;
}

/*--- 集合sの要素数 ---*/
int Size(const HashSet *s)
{
    return s->num;
}

/*
 * 集合sに格納できる最大の要素数 
 * 衝突時、リハッシュではなくLinkedList
 * を使用しているため、容量は不明。
 * 0を返す。
 */
int IsFull(const HashSet *s)
{
    return 0;
}

/*--- 集合s2をs1に代入 ---*/
void Assign(HashSet *s1, const HashSet *s2)
{
    Terminate(s1);
    Initialize(s1, TABLE_SIZE);
    int i;
    for (i = 0; i < s2->size; i++) {
        Node *temp = s2->hash[i];
        while (temp != NULL) {
            Add(s1, temp->val);
            temp = temp->next;
        }
    }
}

/*--- 集合s1とs2は等しいか ---*/
int Equal(const HashSet *s1, const HashSet *s2)
{
    int i;

    if (Size(s1) != Size(s2)) return 0;

    for (i = 0; i < s1->size; i++) {
        Node *temp = s1->hash[i];
        while (temp != NULL) {
            if (!IsMember(s2, temp->val)) return 0;
            temp = temp->next;
        }
    }
    return 1;
}

/*--- 集合s2とs3の和集合をs1に代入 ---*/
HashSet *Union(HashSet *s1, const HashSet *s2, const HashSet *s3)
{
    int i;
    for (i = 0; i < s2->size; i++) {
        Node *temp = s2->hash[i];
        while (temp != NULL) {
            Add(s1, temp->val);
            temp = temp->next;
        }
    }
    for (i = 0; i < s3->size; i++) {
        Node *temp = s3->hash[i];
        while (temp != NULL) {
            Add(s1, temp->val);
            temp = temp->next;
        }
    }    
    return s1;
}

/*--- 集合s2とs3の積集合をs1に代入 ---*/
HashSet *Intersection(HashSet *s1, const HashSet *s2, const HashSet *s3)
{
    int i;
    for (i = 0; i < s2->size; i++) {
        Node *temp = s2->hash[i];
        while (temp != NULL) {
            if (IsMember(s3, temp->val)) {
                Add(s1, temp->val);
            }
            temp = temp->next;
        }
    }
    return s1;
}

/*--- 集合s2からs3を引いた集合をs1に代入 ---*/
HashSet *Difference(HashSet *s1, const HashSet *s2, const HashSet *s3)
{
    int i;
    for (i = 0; i < s2->size; i++) {
        Node *temp = s2->hash[i];
        while (temp != NULL) {
            if (!IsMember(s3, temp->val)) {
                Add(s1, temp->val);
            }
            temp = temp->next;
        }
    }
    return s1;
}

/*--- 集合s2とs3の対称差をs1に代入する ---*/
HashSet *SymmetricDifference(HashSet *s1, const HashSet *s2, const HashSet *s3)
{
    int i;
    Difference(s1, s2, s3);
    Difference(s1, s3, s2);
    return s1;
}

/*--- 集合s1に対して集合s2の全要素を追加する ---*/
HashSet *ToUnion(HashSet *s1, const HashSet *s2)
{
    int i;
    for (i = 0; i < s2->size; i++) {
        Node *temp = s2->hash[i];
        while (temp != NULL) {
            Add(s1, temp->val);
            temp = temp->next;
        }
    }
    return s1;
}

/*
 集合s1から集合s2に含まれない要素を削除する
 つまり、s1をs1とs2の積集合にする
*/
HashSet *ToIntersection(HashSet *s1, const HashSet *s2)
{
    int i;
    for (i = 0; i < s1->size; i++) {
        Node *temp = s1->hash[i];
        while (temp != NULL) {
            if (!IsMember(s2, temp->val)) {
                Remove(s1, temp->val);
            }
            temp = temp->next;
        }
    }
    return s1;
}

/* 
集合s1から集合s2に含まれる要素を削除する
つまり、s1をs1からs2を引いた集合にする
*/
HashSet *ToDifference(HashSet *s1, const HashSet *s2)
{
    int i;
    for (i = 0; i < s1->size; i++) {
        Node *temp = s1->hash[i];
        while (temp != NULL) {
            if (IsMember(s2, temp->val)) {
                Remove(s1, temp->val);
            }
            temp = temp->next;
        }
    }
    return s1;
}

/*
集合s1がs2の部分集合であるかどうかを判定する
・部分集合である場合、1
・部分集合出ない場合、0
を返す
 */
int IsSubset(const HashSet *s1, const HashSet *s2)
{
    int i;
    for (i = 0; i < s1->size; i++) {
        Node *temp = s1->hash[i];
        while (temp != NULL) {
            if (!IsMember(s2, temp->val)) {
                return 0;
            }
            temp = temp->next;
        }
    }
    return 1;
}

/*
集合s1がs2の真部分集合であるかどうかを判定する
・真部分集合である場合、1
・真部分集合出ない場合、0
を返す
*/
int IsProperSubset(const HashSet *s1, const HashSet *s2)
{
    return IsSubset(s1, s2) && Size(s2) > Size(s1);
}

/*--- 集合sの全要素を表示 ---*/
void Print(const HashSet *s)
{
    int i;
    for (i = 0; i < s->size; i++) {
        Node *temp = s->hash[calc_hash(s, i)];
        while(temp != NULL) {
            printf("%d ", temp->val);
            temp = temp->next;
        }
    }
}

/*--- 集合sの全要素を表示(改行付き) ---*/
void PrintLn(const HashSet *s)
{
    Print(s);
    putchar('\n');
}

/*--- 集合sが内部で使用しているハッシュテーブルの表示 ---*/
void PrintHash(const HashSet *s) 
{
    int i;
    for (i = 0; i < s->size; i++) {
        Node *temp = s->hash[i];
        while (temp != NULL) {
            printf("%d ", temp->val);
            temp = temp->next;
        }
        printf("\n");
    }
}
/*--- 集合の後始末 ---*/
void Terminate(HashSet *s) 
{
    if (s->hash != NULL) {
        free(s->hash);
        s->size = s->num = 0;
    }
}
