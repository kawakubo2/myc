#include <stdio.h>

int combination(int n, int r)
{
    if (r == 0 || n == r) return 1;
    if (r == 1) return n;
    return combination(n - 1, r - 1) + combination(n - 1, r);
}
int main(void)
{
    int n, r;
    puts("異なるn個の整数からr個の整数を取り出す組み合わせ数を求めます。");
    do {
        printf("n: "); fscanf(stdin, "%d", &n);
    } while (n < 1);
    do {
        printf("r: "); fscanf(stdin, "%d", &r);
        if (r > n) printf("%dは%d以下を入力してください。\n", r, n);
    } while (r < 0 || r > n);

    printf("%d個から%d個を取り出す組み合わせ数は%d個です。\n", n, r, combination(n, r));    
}
