#include <stdio.h>

/*
 軸要素をインデックスの中央の値にする方法
*/
void print_array(int* nums, int size)
{
    int i;
    for (i = 0; i < size; i++) {
        printf("%2d ", nums[i]);
    }
    printf("\n");
}

void quick_sort(int *nums, int left, int right) {
    int temp;
    int mid_index = (left + right) / 2;
    int mid = nums[mid_index];
    int pl = left;
    int pr = right;
    do {
        while (nums[pl] < mid) pl++;
        while (nums[pr] > mid) pr--;
        if (pl <= pr) {
            temp = nums[pl];
            nums[pl] = nums[pr];
            nums[pr] = temp;
            pl++;
            pr--;
        }
        print_array(nums, 16);
        getchar();
    } while (pl <= pr);
    if ((pr - left) > 0) {
        quick_sort(nums, left, pr);
    }
    if ((right - pl) > 0) {
        quick_sort(nums, pl, right);
    }
}

int main(void)
{
    int numbers[] = {10, 9, 15, 5, 3, 16, 12, 14, 1, 2, 7, 11, 6, 8, 4, 13};

    printf("---< quick sort前 >---\n");
    print_array(numbers, 16);
    quick_sort(numbers, 0, 15);
    printf("---< quick sort後 >---\n");
    print_array(numbers, 16);

}