#include <stdio.h>

int int_length(int n)
{
    int len = 0;
    while (n > 0) {
        n /= 10;
        len++;
    }
    return len;
}

int main(void)
{
    int n;

    printf("正の整数を入力してください : ");
    scanf("%d", &n);

    printf("%dは%d桁です。\n", n, int_length(n));

    return 0;
}
