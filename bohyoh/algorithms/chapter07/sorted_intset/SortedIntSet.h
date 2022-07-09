/* int型集合SortedIntSet(ヘッダ部) */

#ifndef ___SortedIntSet
#define ___SortedIntSet

/*--- int型の集合を実現する構造体 ---*/
typedef struct {
    int max;
    int num;
    int *set;
} SortedIntSet;

/*--- 集合の初期化 ---*/
int Initialize(SortedIntSet *s, int max);

/*--- 要素の探索 ---*/
/*
 探索成功時はsuccessに1を、失敗時は0を返す
 posには2分探索終了時のインデックスを設定する
*/
int BinarySearch(const SortedIntSet *s, int n, int *pos); 

/*--- 集合sにnが入っているか ---*/
int IsMember(const SortedIntSet *s, int n);

/*--- 集合sにnを追加 ---*/
void Add(SortedIntSet *s, int n);

/*--- 集合sからnを削除 ---*/
void Remove(SortedIntSet *s, int n);

/*--- 集合sに格納できる最大の要素数 ---*/
int Capacity(const SortedIntSet *s);

/*--- 集合sの要素数 ---*/
int Size(const SortedIntSet *s);

/*--- 集合が満杯であれば1を、満杯でなければ0を返す ---*/
int IsFull(const SortedIntSet *s);

/*--- 集合の全要素を削除する ---*/
void Clear(SortedIntSet *s);

/*--- 集合s2をs1に代入 ---*/
void Assign(SortedIntSet *s1, const SortedIntSet *s2);

/*--- 集合s1とs2は等しいか ---*/
int Equal(const SortedIntSet *s1, const SortedIntSet *s2);

/*--- 集合s2とs3の和集合をs1に代入 ---*/
SortedIntSet *Union(SortedIntSet *s1, const SortedIntSet *s2, const SortedIntSet *s3);

/*--- 集合s2とs3の積集合をs2に代入 ---*/
SortedIntSet *Intersection(SortedIntSet *s1, const SortedIntSet *s2, const SortedIntSet *s3);

/*--- 集合s2からs3を引いた集合をs1に代入 ---*/
SortedIntSet *Difference(SortedIntSet *s1, const SortedIntSet *s2, const SortedIntSet *s3);

/*--- 集合s2とs3の対称差をs1に代入する ---*/
SortedIntSet *SymmetricDifference(SortedIntSet *s1, const SortedIntSet *s2, const SortedIntSet *s3);

/*--- 集合s1に対して集合s3の全要素を追加する ---*/
SortedIntSet *ToUnion(SortedIntSet *s1, const SortedIntSet *s2);

/*
 集合s1から集合s2に含まれない要素を削除する
 つまり、s1をs1とs2の積集合にする
*/
SortedIntSet *ToIntersection(SortedIntSet *s1, const SortedIntSet *s2);

/* 
集合s1から集合s2に含まれる要素を削除する
つまり、s1をs1からs2を引いた集合にする
*/
SortedIntSet *ToDifference(SortedIntSet *s1, const SortedIntSet *s2);

/*
集合s1がs2の部分集合であるかどうかを判定する
・部分集合である場合、1
・部分修道でない場合、0
を返す
*/
int IsSubset(const SortedIntSet *s1, const SortedIntSet *s2);

/*
集合s1がs2の真部分集合であるかどうかを判定する
・真部分集合である場合、1
・真部分集合でない場合、0
を返す
*/
int IsProperSubset(const SortedIntSet *s1, const SortedIntSet *s2);

/*--- 集合sの全要素を表示 ---*/
void Print(const SortedIntSet *s);

/*--- 集合sの全要素を表示(改行付き) ---*/
void PrintLn(const SortedIntSet *s);

/*--- 集合の後始末 ---*/
void Terminate(SortedIntSet *s);

#endif