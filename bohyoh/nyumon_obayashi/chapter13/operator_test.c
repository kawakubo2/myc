#include <stdio.h>
#include "add.h"
#include "sub.h"

int main(void)
{
    double a = 5.4;
    double b = 3.2;

    double c = add(a, b);
    double d = add(a, b);

    printf("%.2f + %.2f = %.2f\n", a, b, c);
    printf("%.2f / %.2f = %.2f\n", a, b, d);

    return 0;
}