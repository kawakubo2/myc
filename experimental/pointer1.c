#include <stdio.h>

int mysum(const int *a, int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++) {
        sum += *a;
        a++;
    }
    return sum;
}

int mysum2(const int a[], int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++) {
        sum += a[i];
    }
    return sum;
}

int main(void)
{
    int size, ans;
    int nums[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    size = sizeof(nums) / sizeof(nums[0]);
    ans = mysum(nums, size);
    printf("合計:%d\n", ans);
    
    ans = mysum2(nums, size);
    printf("合計:%d\n", ans);

    return 0;
}

