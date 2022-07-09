#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 1000000

void insertion_sort(int* nums, int size, int interval, int offset)
{
    int i, j, temp;
    for (i = offset; i < size; i += interval) {
        temp =  nums[i];
        for (j = i; j - interval >= 0 && nums[j - interval] > temp; j -= interval) {
            nums[j] = nums[j - interval];
        }
        nums[j] = temp;
    }
}

void shell_sort(int *nums, int size)
{
    int i, interval, offset;
    interval = size / 2;
    while (interval > 0) {
        for (offset = 0; offset < interval; offset++) {
            insertion_sort(nums, size, interval, offset);
        }
        if (interval == 1) break;
        if (interval / 3 == 0) {
            interval = 1;
        } else {
            interval /= 3;
        }
    }
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

    shell_sort(numbers, NUM);

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