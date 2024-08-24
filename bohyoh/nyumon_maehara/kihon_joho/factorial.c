#include <stdio.h>

unsigned long long int factorial(int n)
{
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main(void) 
{
    int n;
    printf("factorial(n)のnを入力してください: ");
    fscanf(stdin, "%d", &n);
    printf("%dの階乗は%llu\n", n, factorial(n));

    return 1;
}