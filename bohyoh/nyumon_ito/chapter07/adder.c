#include <stdio.h>

int main(void)
{
    int a = 10; // 1010
    int b = 5; //  0101
    int c = a & b;
    printf("a & b = %d\n", a & b);
    int d = a | b;
    printf("a | b = %d\n", a | b);
    unsigned int e = 100; 
    unsigned int f = 128; 

    printf("f - e = %u\n", f + (~e + 1));
    printf("e - f = %d\n", e + (~f + 1));
}