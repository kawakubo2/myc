#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 5;
    int c = 5;

    printf("a : %d\n", a);
    printf("b : %d\n", b);
    printf("c : %d\n", c);

    printf("a > b -> %d\n", a > b);
    printf("a < b -> %d\n", a < b);
    printf("a >= b -> %d\n", a >= b);
    printf("a <= b -> %d\n", a <= b);
    printf("b == c -> %d\n", b == c);
    printf("b != c -> %d\n", b != c);

    return 0;
}
