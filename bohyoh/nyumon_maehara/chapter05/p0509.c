#include <stdio.h>
#include "p0509_p.h"

#define NUM 5

int main(void)
{
    int a[NUM];
    int b[NUM];

    input_array(a, NUM);

    copy_a2b_reverse(a, b, NUM);

    print_result(a, b, NUM);

    return 0;
}