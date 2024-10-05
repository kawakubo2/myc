#include <stdio.h>

void swap(int *m, int *n)
{
    int tmp = *m;
    *m = *n;
    *n = tmp;
}


int gcd(int a, int b)
{
    if (a == b) return a;
    if (a < b) {
        swap(&a, &b);
    }
    return gcd(b, a - b);
}

int main(void)
{
    int m, n;
    fscanf(stdin, "%d", &m);
    fscanf(stdin, "%d", &n);
    int answer = gcd(m, n);
    printf("%dと%dの最大公約数は%dです。\n", m, n, answer);

    return 1;
}