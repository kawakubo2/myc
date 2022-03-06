#include <stdio.h>

int combination(int n, int r)
{
    if (r == 0 || n == r) return 1;
    if (r == 1)           return n;

    return combination(n - 1, r - 1) + combination(n - 1, r);
}

int main(void)
{
    int num, n, r;
    puts("組み合わせ数を求めます");
    printf("全体の数: "); scanf("%d", &n);
    printf("選びだす個数: "); scanf("%d", &r);

    if (n < r) {
        printf("全体の個数は、選び出す個数以上を入力してください。\n");
        return -1;
    }

    num = combination(n, r);

    printf("%d個の整数から%d個を選び出す組み合わせ数は%d通りです。\n", n, r, num);

    return 0;
}

