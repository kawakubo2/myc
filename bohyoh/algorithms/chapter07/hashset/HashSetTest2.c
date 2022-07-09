#include <stdio.h>
#include "HashSet.h"

enum { ADD, RMV, SCH };

int scan_data(int sw)
{
    int data;
    switch(sw) {
        case ADD: printf("追加するデータ: "); break;
        case RMV: printf("削除するデータ: "); break;
        case SCH: printf("検索するデータ: "); break;
    }
    scanf("%d", &data);
    return data;
}

int main(void)
{
    HashSet s1, s2, temp;
    Initialize(&s1, TABLE_SIZE); Initialize(&s2, TABLE_SIZE); Initialize(&temp, TABLE_SIZE);

    while(1) {
        int m, x, exists;
        printf("s1 = "); PrintLn(&s1);
        printf("s2 = "); PrintLn(&s2);
        printf("(1)s1に追加 (2)s1から削除 (3)s1から探索 (4)s1 <- s2 (5)各種演算\n"
               "(6)s2に追加 (7)s2から削除 (8)s2から探索 (9)s2 <- s1 (0)終了: ");
        scanf("%d", &m);
        if (m == 0) break;
        
        switch(m) {
            case 1: x = scan_data(ADD); Add(&s1, x); break;
            case 2: x = scan_data(RMV); Remove(&s1, x); break;
            case 3: x = scan_data(SCH); exists = IsMember(&s1, x);
                        printf("s1に含まれていま%s。\n", exists == 1 ? "す": "せん"); break;
            case 4: Assign(&s1, &s2); break;
                    break;
            case 5: printf("s1のhashtable: \n"); PrintHash(&s1);
                    printf("s2のhashtable: \n"); PrintHash(&s2);
                    printf("s1 == s2 = %s\n", Equal(&s1, &s2) ? "true": "false");
                    printf("s1 & s2 = "); Terminate(&temp);
                                          Initialize(&temp, TABLE_SIZE);
                                          Intersection(&temp, &s1, &s2);
                                          PrintLn(&temp);
                    printf("s1 | s2 = "); Terminate(&temp);
                                          Initialize(&temp, TABLE_SIZE);
                                          Union(&temp, &s1, &s2);
                                          PrintLn(&temp);
                    printf("s1 - s2 = "); Terminate(&temp);
                                          Initialize(&temp, TABLE_SIZE);
                                          Difference(&temp, &s1, &s2);
                                          PrintLn(&temp);
                    printf("ToIntersection(&s1, &s2) = ");
                                          Assign(&temp, &s1);
                                          ToIntersection(&s1, &s2);
                                          PrintLn(&s1);
                    printf("ToUnion(&s1, &s2) = ");
                                          Assign(&s1, &temp);
                                          ToUnion(&s1, &s2);
                                          PrintLn(&s1);
                    printf("ToDifference(&s1, &s2) = ");
                                          Assign(&s1, &temp);
                                          ToDifference(&s1, &s2);
                                          PrintLn(&s1);
                                          Assign(&s1, &temp);
                    printf("s1 is %sa subset of s2\n", IsSubset(&s1, &s2) ? "": "not ");
                    printf("s1 is %sa proper subset of s2\n", IsProperSubset(&s1, &s2) ? "": "not ");
                    break;
            case 6: x = scan_data(ADD); Add(&s2, x); break;
            case 7: x = scan_data(RMV); Remove(&s2, x); break;
            case 8: x = scan_data(SCH); exists = IsMember(&s2, x);
                    printf("s2に含まれていま%s。\n", exists >= 0 ? "す": "せん"); break;
            case 9: Assign(&s2, &s1); break;
                    break;
        }
    }
    Terminate(&s1); Terminate(&s2); Terminate(&temp);

    return 0;
}