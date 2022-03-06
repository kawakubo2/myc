#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 100000

void insertion_sort(int *nums, int size)
{
    int i, j, temp;
    for (i = 1; i < size; i++) {
        temp = nums[i];
        for (j = i; j > 0 && nums[j - 1] > temp; j--) {
            nums[j] = nums[j - 1];
        }
        nums[j] = temp;
    }
}

void print_array(int *nums, int size)
{
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int test(int *nums, int size) 
{
    int i;
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

    for (i = 0; i < NUM; i++) {
        numbers[i] = rand() / 65536;
    }


//    puts("---< insertion sort前 >---");
//    print_array(numbers, NUM);

    start = clock();

    insertion_sort(numbers, NUM);

    end = clock();

    printf("%d件\n", NUM);
    printf("処理時間:%.3f\n", (double)(end - start) / CLOCKS_PER_SEC);

//    puts("---< insertion sort後 >---");
//    print_array(numbers, NUM);
    if (test(numbers, NUM)) {
        printf("ソート検証済み\n");
    } else {
        printf("ソート不整合\n");
    }

    return 0;
}