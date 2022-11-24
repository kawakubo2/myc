#include <stdio.h>

void rev_intary(int v[], int n)
{
    int i, tmp;
    for (i = 0; i < n / 2; i++) {
        tmp = v[i];
        v[i] = v[(n - 1) - i];
        v[(n - 1) - i] = tmp;
    }
}

int main(void)
{
    int i;
    int nums[] = {10, 7, 2, 3, 8, 1};
    rev_intary(nums, 6);
    for (i = 0; i < 6; i++) {
        printf("%3d", nums[i]);
    }
    putchar('\n');

    return 0;
}