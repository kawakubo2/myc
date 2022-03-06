#include <stdio.h>

int combination(int n, int r)
{
    if (r == 0 || r == n) return 1;
    if (n == 1) return n;

    return combination(n - 1, r - 1) + combination(n - 1, r);
}

int main(void)
{
    int n, r, nb_c;
    printf("n r : ");
    scanf("%d %d", &n, &r);

    nb_c = combination(n, r);

    printf("%d個の中から%d個選び出す組み合わせは%d通りです。\n", n, r, nb_c);

    return 0;
}

