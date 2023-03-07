#include <stdio.h>
#include "BitSet.h"

enum { ADD, RMV, SCH };

/*--- データの読み込み ---*/
int scan_data(int sw)
{
    int data;
    switch (sw) {
        case ADD: printf("追加するデータ: "); break;
        case RMV: printf("削除するデータ: "); break;
        case SCH: printf("検索するデータ: "); break;
    }
    scanf("%d", &data);
    return data;
}

int main(void)
{
    BitSet s1 = BitSetNull;
    BitSet s2 = BitSetNull;

    while(1) {
        int m, x, idx;

        printf("s1 = "); PrintLn(s1);
        printf("s2 = "); PrintLn(s2);
        printf("(1)s1に追加 (2)s1から削除 (3)s1から探索 (4)s1 <- s2 (5)各種処理\n");
        printf("(6)s2に追加 (7)s2から削除 (8)s2から探索 (9)s2 <- s1 (0)終了 : ");
        scanf("%d", &m);
        if (m == 0) break;
        switch (m) {
            case 1: x = scan_data(ADD); Add(&s1, x); break;
            case 2: x = scan_data(RMV); Remove(&s1, x); break;
            case 3: x = scan_data(SCH); idx = IsMember(s1, x);
                    printf("s1に含まれていま%s。\n", idx != 0 ? "す": "せん"); break;
            case 4: s1 = s2; break;
            case 5: printf("s1 == s2 = %s\n", s1 == s2 ? "true" : "false");
                    printf("s1 & s2 = "); PrintLn(s1 & s2);
                    printf("s1 | s2 = "); PrintLn(s1 | s2);
                    printf("s1 - s2 = "); PrintLn(s1 & ~s2);
                    printf("s1 ^ s2 = "); PrintLn(s1 ^ s2);
                    break;
            case 6: x = scan_data(ADD); Add(&s2, x); break;
            case 7: x = scan_data(RMV); Remove(&s2, x); break;
            case 8: x = scan_data(SCH); idx = IsMember(s1, x);
                    printf("s2に含まれていま%s。\n", idx != 0 ? "す": "せん");
            case 9: s2 = s1; break;
        }
    }

    return 0;
}