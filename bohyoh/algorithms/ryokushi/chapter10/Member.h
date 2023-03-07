#ifndef ___Member
#define ___Member

/*--- 会員データ ---*/
typedef struct {
    int no;
    char name[20];
} Member;

#define MEMBER_NO     1
#define MEMBER_NAME   2

/*--- 会員の番号の比較関数 ---*/
int MemberNoCmp(const Member *x, const Member *y);

/*--- 会員の氏名の比較関数 ---*/
int MemberNameCmp(const Member *x, const Member *y);

/*--- 会員データの表示(改行なし) ---*/
void PrintMember(const Member *x);

/*--- 会員データの表示(改行あり) ---*/
void PrintLnMember(const Member *x);

/*--- 会員データの読み込み ---*/
Member ScanMember(const char *message, int sw);

#endif