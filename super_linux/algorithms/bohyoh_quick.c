#include <stdio.h>

void swap(int *nums, int n1, int n2) {
    int temp = nums[n1];
    nums[n1] = nums[n2];
    nums[n2] = temp;
}

void print_array(int* nums, int size)
{
    int i;
    for (i = 0; i < size; i++) {
        printf("%2d ", nums[i]);
    }
    printf("\n");
}

void quick(int *nums, int left, int right)
{
    int pl = left;
    int pr = right;
    int mid = nums[(pl + pr) / 2];
    do {
        while (nums[pl] < mid) pl++;
        while (nums[pr] > mid) pr--;
        if (pl <= pr) {
            swap(nums, pl, pr);
            pl++;
            pr--;
        }
    } while (pl <= pr);
    if (left < pr) quick(nums, left, pr);
    if (right > pl) quick(nums, pl, right);
}

int main(void)
{
    int numbers[] = {10, 9, 15, 5, 3, 16, 12, 14, 1, 2, 7, 11, 6, 8, 4, 13};

    printf("---< quick sort前 >---\n");
    print_array(numbers, 16);
    quick(numbers, 0, 15);
    printf("---< quick sort後 >---\n");
    print_array(numbers, 16);
}