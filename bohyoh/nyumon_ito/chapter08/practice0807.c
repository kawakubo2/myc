#include <stdio.h>

int combination(int n, int r)
{
    if (n == r || r == 0) return 1;
    if (r == 1) return n;
    return combination(n - 1, r - 1) + combination(n - 1, r);
}

int main(void)
{
    int n;
    int r;
    puts("n個の中からr個を呼び出す計算をします。");
    printf("n: "); scanf("%d", &n);
    printf("r: "); scanf("%d", &r);
    printf("%d個の中から%d個を取り出す組み合わせは%d通り\n", n, r, combination(n, r));

    return 0;
}