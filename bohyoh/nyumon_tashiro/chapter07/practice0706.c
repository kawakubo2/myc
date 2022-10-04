#include <stdio.h>

#define UINT_MAX ~0U

int main()
{
    unsigned n = 100000;
    unsigned long l = n * n;
    unsigned m = n * n;
    if (m == l % UINT_MAX) {
        printf("等しい\n");
    }
}