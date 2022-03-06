#include <stdio.h>

int main(void)
{
    int i, num;

    do {
        printf("正の整数 : ");
        scanf("%d", &num);
    } while (num <= 0);

    for (i = 1; i <= num; i++) {
        printf("%d", i % 10);
    }
    putchar('\n');

    return 0;
}

