#include <stdio.h>

int main(void)
{
    int a, b;

    printf("整数a: ");
    scanf("%d", &a);
    printf("整数b: ");
    scanf("%d", &b);
    
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);

    return 0;
}