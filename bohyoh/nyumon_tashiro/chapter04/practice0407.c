#include <stdio.h>

int main()
{
    int n, r = 1;
    printf("整数を入力してください: ");
    fscanf(stdin, "%d", &n);

    while (r <= n) {
        r *= 2;
        if (r > n) break;
        printf("%d ", r);
    }
    printf("\n");
}