#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 1000000

void merge(int *src, int *temp, int left, int mid, int right)
{
    int i = left;
    int j = mid;
    int k = 0, l = 0;
    while (i < mid && j < right) {
        if (src[i] <= src[j]) {
            temp[k++] = src[i++];
        } else {
            temp[k++] = src[j++];
        }
    }
    if (i == mid) {
        while (j < right) {
            temp[k++] = src[j++];
        }
    } else {
        while (i < mid) {
            temp[k++] = src[i++];
        }
    }
    for (l = 0; l < k; l++) {
        src[left + l] = temp[l];
    }
}

void merge_sort(int *src, int *temp, int left, int right) {
    if (left == right || left == right - 1) return;
    int mid = (left + right) / 2;
    merge_sort(src, temp, left, mid);
    merge_sort(src, temp, mid, right);
    merge(src, temp, left, mid, right);
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
    int temp[NUM] = {0};
    clock_t start, end;

    srand(1234);

    for (i = 0; i < NUM; i++) {
        numbers[i] = rand();
    }

    printf("%d件\n", NUM);
    
 //   printf("---< shell sort前 >---\n");
 //   print_array(numbers, NUM);

    start = clock();

    merge_sort(numbers, temp, 0, NUM);

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

/*
int main(void)
{
    int numbers[] = { 11, 2, 8, 5, 4, 9, 15, 1, 7, 16, 4, 10, 3, 11, 6, 14 };
    int temp[16] = {};
    merge_sort(numbers, temp, 0, 16);

    for (int i = 0; i < 16; i++) {
        printf("%2d ", numbers[i]);
    }
    printf("\n");

    return 1;
}
*/