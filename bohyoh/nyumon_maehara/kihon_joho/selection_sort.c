#include <stdio.h>

void selection_sort(int nums[], int size)
{
    for (int i = 0; i < size - 1; i++) {
        int min = i;
        // jは(i + 1)空ではなくiから始めないといけない
        for (int j = i; j < size; j++) {
            if (nums[min] > nums[j]) {
                min = j;
            }
        }
        int tmp = nums[min];
        nums[min] = nums[i];
        nums[i] = tmp;
    }
}

void print_array(int nums[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("%3d ", nums[i]);
    }
    printf("\n");
}
int main(void)
{
    int nums[] = {77, 58, 41, 83, 19, 62, 90, 15, 22, 68};
    selection_sort(nums, 10);
    print_array(nums, 10);

    return 1;
}