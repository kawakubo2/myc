#include <stdio.h>

int main(void)
{
    int a, b;
    printf("整数a: "); scanf("%d", &a);
    printf("整数b: "); scanf("%d", &b);

    printf("a = %d, b = %d\n", a, b);
    if (a > b) {
        int tmp = a;
        a = b;
        b = tmp;        
    }
    printf("a = %d, b = %d\n", a, b);

    return 0;
}