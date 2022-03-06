#include <stdio.h>
#include "myfunction.h"

int main(void)
{
    // (a + b) * c - (b / a)
    int a = 3, b = 9, c = 2;
    int answer = sub(mul(add(a, b), c), div(b, a));

    printf("a = %d, b = %d, c = %d\n", a, b, c);

    printf("(a + b) * c - (b / a) = %d\n", answer);

    return 0;
}

