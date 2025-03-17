#include <stdio.h>

int main(void)
{
    int no;
    printf("整数: "); scanf("%d", &no);

    /*
    for (初期化式; 条件式; 増減式) 
    {
        処理A;
        処理B;
        処理C;
    }
    */
    for (int i = 0; i <= no; i++) {
        printf("%2d ", i);
    }
    putchar('\n');

    for (int i = no; i >= 0; i--) {
        printf("%2d ", i);
    }
    putchar('\n');

    return 0;
}