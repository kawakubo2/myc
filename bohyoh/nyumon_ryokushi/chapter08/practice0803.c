#include <stdio.h>

#define swap(type, a, b) {\
    type temp;\
    temp = a;\
    a = b;\
    b = temp;\
}

int main(void)
{
    int n1, n2;
    double x1, x2;

    printf("整数1 : "); scanf("%d", &n1);
    printf("整数2 : "); scanf("%d", &n2);
    printf("整数1: %d, 整数2: %d\n", n1, n2);
    
    swap(int, n1, n2);
    printf("整数1: %d, 整数2: %d\n", n1, n2);
    
    printf("実数1 : "); scanf("%lf", &x1);
    printf("実数2 : "); scanf("%lf", &x2);
    printf("実数1: %f, 実数2: %f\n", x1, x2);
    
    swap(double, x1, x2);
    printf("実数1: %f, 実数2: %f\n", x1, x2);
    
    return 0;
}

