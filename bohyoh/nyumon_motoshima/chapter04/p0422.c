#include <stdio.h>

int main(void)
{
    int x, y;
    puts("横長の長方形を作ります");

    printf("一辺: "); scanf("%d", &x); // 行数
    printf("一辺: "); scanf("%d", &y); // 列数

    if (x > y) {
        int tmp = x;
        x = y;
        y = tmp;
    }

    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= y; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}

