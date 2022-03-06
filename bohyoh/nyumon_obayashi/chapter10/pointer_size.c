#include <stdio.h>

int main(void)
{
    int n;
    double x;
    char c;

    printf("sizeof [&n = %u, &x = %u, &c = %u]\n", 
            (unsigned)sizeof(&n), (unsigned)sizeof(&x), (unsigned)sizeof(&c));

    return 0;
}
