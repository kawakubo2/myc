#include <stdio.h>

int main(void)
{
    int i, n, m = 1;

    printf("正の整数を入力してください : ");
    scanf("%d", &n);

    printf("---< 解法1 >---\n");
    for (i = 1; i <= n; i++) {
        printf("%d", i % 10);
    }
    putchar('\n');

    printf("---< 解法2 >---\n");

    for (i = 1; i <= n; i++) {
        printf("%d", m %= 10);
        m++;
    }
    putchar('\n');

    return 0;
}

