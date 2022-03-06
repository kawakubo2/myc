#include <stdio.h>

int main(void)
{
    int a, b;
    double c;

    puts("二つの整数を入力してください。");

    printf("整数a : ");
    scanf("%d", &a);
    printf("整数b : ");
    scanf("%d", &b);

    c = (double)a / b;

    printf("aの値はbの%f%%です。\n", c);

    return 0;
}

