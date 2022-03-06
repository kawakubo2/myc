#include <stdio.h>

int main(void)
{
    int    n;
    double x;
    
    int    a[3];

    a[0] = 10;

    printf("n   のアドレス: %p\n", &n);
    printf("x   のアドレス: %p\n", &x);
    printf("a[0]のアドレス: %p\n", &a[0]);
    printf("a[1]のアドレス: %p\n", &a[1]);
    printf("a[2]のアドレス: %p\n", &a[2]);
    
    printf("a[0] = %d\n", a[0]);
    printf("*(a + 0) = %d\n", *(a + 0));

    return 0;
}

