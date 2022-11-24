#include <stdio.h>

int combination(int n, int r) {
    if (r == 0 || n == r) return 1;
    if (r == 1) return n;
    return combination(n - 1, r - 1) + combination(n - 1, r);
}

int main(void)
{
    int n, r;
    printf("総数: "); scanf("%d", &n);
    printf("取り出す数: "); scanf("%d", &r);

    printf("%dの中から%d個を取り出す組み合わせ数は%d通りあります\n", n, r, combination(n, r));

    return 0;
}