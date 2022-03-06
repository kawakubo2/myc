#include <stdio.h>

int min(int a, int b)
{
    return a < b ? a : b;
}

int main(void)
{
    int n1, n2;
    puts("2つの整数を入力してください。");

    printf("1番目: ");
    scanf("%d", &n1);
    printf("2番目: ");
    scanf("%d", &n2);

    printf("最小値は%dです。\n", min(n1, n2));

    return 0;
}

