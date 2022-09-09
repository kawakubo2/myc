#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 20;
    int c;
    if (a > 5 && (b *= 2) > 30) {
        c = 100;
    } else {
        c = 0;
    }
    printf("a=%d, b=%d, c=%d\n", a, b, c);
    return 0;
}