#include <stdio.h>

int main(void)
{
    int i, n;
    printf("配列の要素数: ");
    fscanf(stdin, "%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        printf("a[%d]: ", i);
        fscanf(stdin, "%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        printf("%3d", a[i]);
    }
    putchar('\n');

    return 0;
}