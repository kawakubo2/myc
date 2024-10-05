#include <stdio.h>

int gcd(int num1, int num2)
{
    int x = num1;
    int y = num2;
    while (x != y) {
        if (x > y) {
            x = x - y;
        } else {
            y = y - x;
        }
    }
    return x;
}

int main(void)
{
    int n1, n2;
    fscanf(stdin, "%d", &n1);
    fscanf(stdin, "%d", &n2);
    int a = gcd(n1, n2);
    printf("%dと%dの最大公約数は%dです。\n", n1, n2, a);

    return 1;
}