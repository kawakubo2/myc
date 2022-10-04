#include <stdio.h>
#include "mybits.h"

int main(void)
{
    unsigned i;
    for (i = 0; i <= 65535U; i++) {
        printf("%5u ", i);
        print_nbits(i, 16);
        printf(" %06o %04X\n", i, i);
    }
    return 0;
}
