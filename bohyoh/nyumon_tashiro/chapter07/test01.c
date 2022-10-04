#include <stdio.h>

int main(void)
{
    int a = 13;
    int b = 7;

    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);

    int permission = 6;
    int readable   = 4;
    int writable   = 2;
    int executable = 1;
    printf("%d\n", permission & readable);
}
