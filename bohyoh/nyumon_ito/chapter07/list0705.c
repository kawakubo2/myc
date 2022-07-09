#include <stdio.h>

int sum(int nums[10], int size)
{
    int i, total = 0;
    // unsigned int size = sizeof(nums) / sizeof(nums[0]);
    for (i = 0; i < size; i++) {
        total += nums[i];
    }
    return total;
}
int main(void)
{
    int vi[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vd[25];

    printf("配列viの要素数=%u\n", (unsigned)(sizeof(vi) / sizeof(vi[0])));
    printf("配列vdの要素数=%u\n", (unsigned)(sizeof(vd) / sizeof(vd[0])));

    printf("viの合計: %d\n", sum(vi, 10));

    return 0;
}