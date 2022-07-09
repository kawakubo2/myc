#include <stdio.h>
#include "mybits.h"

int main(void)
{
    unsigned int num = 128; // xxxxxx10000000
    print_bits(num);
    putchar('\n');
    print_bits(num << 4);
    putchar('\n');
    if (num << 4 == num * 16) {
        puts("左4ビットシフトと16をかけた値は等しい");
    }
    if (num >> 4 == num / 16) {
        puts("右4ビットシフトと16を割った値は等しい");
    }
    print_bits(num >> 4);
    putchar('\n');
    return 0;
}