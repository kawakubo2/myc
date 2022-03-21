#ifndef ___HashSet
#define ___HashSet

#include "collections.h"

#define TABLE_SIZE 16

/*--- int型の集合を実現する集合体 ---*/
typedef struct {
    int num;
    int size; // ハッシュテーブルのサイズ
    Node **hash;
} HashSet;

/*--- 集合の初期化 ---*/
int Initialize(HashSet *s, int size);

/*--- 集合sにnが入っているか ---*/
int IsMember(const HashSet *s, int n);

/*--- 集合sにnを追加 ---*/
void Add(HashSet *s, int n);

/*--- 集合sからnを削除 ---*/
void Remove(HashSet *s, int n);

/*--- 集合sに格納できる最大の要素数 ---*/
int Capacity(const HashSet *s);

/*--- 集合sの要素数 ---*/
int Size(const HashSet *s);

/*--- 集合sが満杯であれば1を、満杯でなければ0を返す ---*/
int IsFull(const HashSet *s);

/*--- 集合s2をs1に代入 ---*/
void Assign(HashSet *s1, const HashSet *s2);

/*--- 集合s1とs2は等しいか ---*/
int Equal(const HashSet *s1, const HashSet *s2);

/*--- 集合s2とs3の和集合をs1に代入 ---*/
HashSet *Union(HashSet *s1, const HashSet *s2, const HashSet *s3);

/*--- 集合s2とs3の積集合をs1に代入 ---*/
HashSet *Intersection(HashSet *s1, const HashSet *s2, const HashSet *s3);

/*--- 集合s2からs3を引いた集合をs1に代入 ---*/
HashSet *Difference(HashSet *s1, const HashSet *s2, const HashSet *s3);

/*--- 集合s2とs3の対称差をs1に代入する ---*/
HashSet *SymmetricDifference(HashSet *s1, const HashSet *s2, const HashSet *s3);

/*--- 集合s1に対して集合s2の全要素を追加する ---*/
HashSet *ToUnion(HashSet *s1, const HashSet *s2);

/*
 集合s1から集合s2に含まれない要素を削除する
 つまり、s1をs1とs2の積集合にする
*/
HashSet *ToIntersection(HashSet *s1, const HashSet *s2);

/*--- 集合s1に対して集合s2の全要素を追加する ---*/
HashSet *ToDifference(HashSet *s1, const HashSet *s2);

/*
集合s1がs2の部分集合であるかどうかを判定する
・部分集合である場合、1
・部分集合出ない場合、0
を返す
 */
int IsSubset(const HashSet *s1, const HashSet *s2);

/*
集合s1がs2の真部分集合であるかどうかを判定する
・真部分集合である場合、1
・真部分集合出ない場合、0
を返す
*/
int IsProperSubset(const HashSet *s1, const HashSet *s2);

/*--- 集合sの全要素を表示 ---*/
void Print(const HashSet *s);

/*--- 集合sの全要素を表示(改行付き) ---*/
void PrintLn(const HashSet *s);

/*--- 集合sが内部で使用しているハッシュテーブルの表示 ---*/
void PrintHash(const HashSet *s);

/*--- 集合の後始末 ---*/
void Terminate(HashSet *s);

#endif