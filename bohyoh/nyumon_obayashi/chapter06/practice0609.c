#include <stdio.h>
#include "chapter06.h"

void rev_intary(int v[], int n)
{
    int i;
    for (i = 0; i < n / 2; i++) {
        int tmp = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i] = tmp;
    }
}

int main(void)
{
    int nums[] = { 5, 12, 5, 8, 17, 7 };
    puts("反転前");
    print_array(nums, 6);
    
    rev_intary(nums, 6);
    puts("反転後");
    print_array(nums, 6);

    return 0;
}

