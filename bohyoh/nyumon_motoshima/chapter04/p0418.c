#include <stdio.h>

int main(void)
{
    int n;
    printf("個数: "); scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        putchar('*');
        if (i % 5 == 0) putchar('\n');
    }
    putchar('\n');

    puts("--------------------------");
    for (int i = 0; i < n; i++) {
        putchar('*');
        if ((i + 1) % 5 == 0) {
            putchar('\n');
        }
    }
    putchar('\n');

    return 0;
}

