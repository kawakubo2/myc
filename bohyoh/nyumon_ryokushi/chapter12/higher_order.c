#include <stdio.h>
#define NUMBER 13
int sum1(int nums[], int n)
{
    int i;
    int total = 0;
    for (i = 0; i < n; i++) {
        if (1) {
            total += nums[i];
        }
    }
    return 0;
}

int sum2(int nums[], int n) {
    int i;
    int total = 0;
    for (i = 0; i < n; i++) {
        if (nums[i] % 2 == 0) {
            total += nums[i];
        }
    }
    return 0;
}

int sum3(int nums[], int n) {
    int i;
    int total = 0;
    for (i = 0; i < n; i++) {
        if (nums[i] > 0) {
            total += nums[i];
        }
    }
    return 0;
}

int positive_odd(int n) 
{
    return n > 0 && n % 2 == 1;
}

int higher_sum(int nums[], int n, int (*func)(int))
{
    int i;
    int total = 0;
    for (i = 0; i < n; i++) {
        if (func(nums[i])) {
            total += nums[i];
        }
    }
    return 0;
}

int main(void)
{
    int nums[] = {-3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int total = higher_sum(nums, NUMBER, positive_odd);
    printf("%d\n", total);
}