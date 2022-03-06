#include <stdio.h>

int combination(int n, int r)
{
    if (r == 0) return 1;
    if (n == r) return 1;
    if (r == 1) return n;
    return combination(n - 1, r -1) + combination(n - 1, r);
}

int main(void)
{
    int n, r;
    puts("組み合わせ数を求めます。");
    printf("総数:");
    scanf("%d", &n);
    printf("取り出す数:");
    scanf("%d", &r);

    printf("%dの中から%d個取り出す場合の組み合わせ数は%dです。\n", n, r, combination(n, r));

    return 0;
}


