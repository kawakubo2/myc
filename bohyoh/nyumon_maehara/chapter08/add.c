#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}
int main(void)
{
    int a, b;
    puts("2つの整数値の和を求めます。");
    fscanf(stdin, "%d%d", &a, &b);
    printf("%d + %d = %d\n", a, b, add(a, b));

    return 0;
}
