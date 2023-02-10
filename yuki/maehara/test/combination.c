#include <stdio.h>

int factorial(int n)
{
    if (n != 0) {
        return n * factorial(n - 1);
    }
    return 1;
}

int combination(int n, int r)
{
    return combination(n - 1, r - 1) + combination(n - 1, 1);
}

int main(void)
{
    for (int i = 0; i <= 5; i++) {
        printf("f(%d)=%d\n", i, factorial(i));
    }
    
    for (int i = 2; i <= 20; i++) {
        printf("%d人の伝達経路は%d通りです。\n", i, combination(i, 2));
    }
    return 0;
    
}