#include <stdio.h>

int even_sum(int *nums, int n)
{
    int i, total = 0;
    for (i = 0; i < n; i++) {
        if (nums[i] % 2 == 0) {
            total += nums[i];
        }
    }
    return total;
}

int positive_sum(int *nums, int n)
{
    int i, total = 0;
    for (i = 0; i < n; i++) {
        if (nums[i] > 0) {
            total += nums[i];
        }
    }
    return total;
}

int my_sum(int *nums, int n, int (*func)(int))
{
    int i, total = 0;
    for (i = 0; i < n; i++) {
        if (func(nums[i])) {
            total += nums[i];
        }
    }
    return total;
}

int even(int n)
{
    return n % 2 == 0;
}

int positive(int n)
{
    return n > 0;
}

int main(void)
{
    int numbers1[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    int numbers2[8] = { -1, 2, -3, 4, -5, 6, -7, 8 };
    
    int sum1 = my_sum(numbers1, 8, &even);
    printf("偶数の合計: %d\n", sum1);
    
    int sum2 = my_sum(numbers2, 8, &positive);
    printf("正数の合計: %d\n", sum2);

    return 0;
}

