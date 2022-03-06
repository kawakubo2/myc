#include <stdio.h>

int main(void)
{
    int i, num;

    do {
        printf("正の整数 : ");
        scanf("%d", &num);
    } while (num <= 0);

    for (i = 1; i <= num; i++) {
        putchar('*');
        if (i % 5 == 0) putchar('\n');
    }

    putchar('\n');

    return 0;
}

