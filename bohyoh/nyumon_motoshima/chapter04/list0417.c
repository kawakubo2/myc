#include <stdio.h>

int main(void)
{
    int n;
    printf("整数: "); scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    putchar('\n');

    return 0;
}

