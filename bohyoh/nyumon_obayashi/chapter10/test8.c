#include <stdio.h>

int main(void)
{
    int x = 8;
    int y = 5;
    double d = 5.4;

    printf("&x = %p\n", (void*)&x);
    printf("&y = %p\n", (void*)&y);
    printf("&d = %p\n", (void*)&d);
    
    printf("x-size = %u\n", (unsigned)sizeof(x));
    printf("y-size = %u\n", (unsigned)sizeof(y));
    printf("d-size = %u\n", (unsigned)sizeof(d));

    return 0;
}

