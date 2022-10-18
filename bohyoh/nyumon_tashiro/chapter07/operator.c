#include <stdio.h>

int add(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}
int mul(int x, int y)
{
    return x * y;
}
int main(void)
{
    // (a + (c - a)) * (c - b)
    int a = 3;
    int b = 5;
    int c = 8;
    int answer = mul(add(a, sub(c, a)), sub(c, b));
    printf("答え: %d\n", answer);

    int d = 1 + (2 * 3) - 4;

    return 0;
}