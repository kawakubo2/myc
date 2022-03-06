#include <stdio.h>

int reverse_int(int n)
{
    int result = 0;
    while (n > 0) {
        result = result * 10 + n % 10;
        n /= 10;
    }
    return result;
}

int main(void)
{
    int a, b;
    printf("整数を入力してください : ");
    scanf("%d", &a);

    b = reverse_int(a);

    printf("%dを逆から読むと%dです。\n", a, b);

    return 0;
}


