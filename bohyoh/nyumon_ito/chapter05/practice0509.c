#include <stdio.h>

#define NUMBER 80

int main(void)
{
    int i, j;
    int max = 0;
    int num = 20;
    int tensu[] = { 12, 23, 33, 34, 41, 44, 44, 47, 55, 56 \
                  , 56, 58, 59, 59, 62, 63, 70, 85, 92, 100};
    int bunpu[11] = {0};

    for (i = 0; i < num; i++) {
        bunpu[tensu[i] / 10]++;
    }
    for (i = 0; i <= 10; i++)
        printf("%3d", bunpu[i]);
    putchar('\n');
    for (i = 0; i <= 10; i++) {
        if (bunpu[i] > max)
            max = bunpu[i];
    }
    printf("最頻値: %d\n", max);
    puts("\n---分布グラフ---");
    for (i = max; i >= 1; i--) {
        for (j = 0; j <= 10; j++) {
            if (bunpu[j] >= i)
                printf(" * ");
            else
                printf("   ");
        }
        putchar('\n');
    }
    for (i = 0; i <= 10; i++) 
        printf("---");
    putchar('\n');
    for (i = 0; i <= 10; i++)
        printf("%2d ", i * 10);
    putchar('\n');

    return 0;
}