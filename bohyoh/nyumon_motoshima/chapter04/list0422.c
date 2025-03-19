#include <stdio.h>

int main(void)
{
    int retry;
    do {
        int no;
        do {
            printf("正の整数: "); scanf("%d", &no);
        } while (no <= 0);

        for (int i = 1; i <= no; i++) {
            putchar('*');
        }
        putchar('\n');

        printf("もう一度? [Yes…0／No…9]: ");
        scanf("%d", &retry);
    } while (retry == 0);
}

