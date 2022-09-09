#include <stdio.h>

int main(void)
{
    int n;
    printf("正の整数を入力してください: ");
    fscanf(stdin, "%d", &n);
    int result = 0;
    while (n > 0) {
        result = result * 10 + n % 10;
        n /= 10;
    }
    printf("%d\n", result);

    return 0;
}