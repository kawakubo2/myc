#include <stdio.h>

int cube(int x)
{
    int i, result = 1;
    for (i = 0; i < 3; i++) {
        result = result * 3;
    }
    return result;
}

int main(void)
{
    int n;
    fscanf(stdin, "%d", &n);
    int answer = cube(n);
    printf("%dの3乗値は%d\n", n, answer);

    return 0;
}