#include <stdio.h>

int main(void)
{
    int a = 5;
    int b = 10;
    int c = 8;

    if (a >= 8 && (b += 10) >= 15) {
        c += 100;
    }

    printf("a=%d, b=%d, c=%d\n", a, b, c);

    return 0;
}