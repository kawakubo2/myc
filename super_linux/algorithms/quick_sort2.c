#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 1000000

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void print_array(int* nums, int size)
{
    int i;
    for (i = 0; i < size; i++) {
        printf("%2d ", nums[i]);
    }
    printf("\n");
}
void quick_sort(int *nums, int left, int right)
{
    int pl = left;
    int pr = right;
    int pivot = nums[pl];
    // printf("left:%2d right:%2d pivot:%2d\n", left, right, pivot);
    do {
        while (nums[pl] < pivot && pl < right) pl++;
        while (nums[pr] >= pivot && pr > left) pr--;
        if (pl <= pr) {
            swap(&nums[pl], &nums[pr]);
            pl++;
            pr--;
        }
    } while (pl < pr);
    if (pr > left) quick_sort(nums, left, pr);
    if (pl < right) quick_sort(nums, pl, right);
}

int test(int* nums, int size) 
{
    int i = 0;
    for (i = 0; i < size - 1; i++) {
        if (nums[i] > nums[i + 1]) return 0;

    }
    return 1;
}
int main(void)
{
    int i;
    int numbers[NUM];
    clock_t start, end;

    srand(1234);

    for (i = 0; i < NUM; i++) {
        numbers[i] = rand();
    }

    printf("%d件\n", NUM);
    
 //   printf("---< shell sort前 >---\n");
 //   print_array(numbers, NUM);

    start = clock();

    quick_sort(numbers, 0, NUM - 1);

    end = clock();

    printf("処理時間:%.3f\n", (double)(end - start) / CLOCKS_PER_SEC);
 //   printf("---< shell sort後 >---\n");
 //   print_array(numbers, NUM);

    if (test(numbers, NUM)) {
        printf("ソート検証済み\n");
    } else {
        printf("ソート不整合\n");
    }
    return 1;
}
