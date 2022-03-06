#include <stdio.h>
#include "chapter05.h"

int main(void)
{
    int i;
    int v[5];
    for (i = 0; i < 5; i++) {
        v[i] = 5 - i;
    }
    print_array(v, 5);

    for (i = 4; i >= 0; i--) {
        v[i] = 5 - i;
    }
    print_array(v, 5);

    return 0;
}

