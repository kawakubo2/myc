#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (a[j - 1] > a[j]) swap(&a[j - 1], &a[j]);
        }
    }
}

void sort2(int a[], int n)
{
    int i, j;
    for (i = n - 1; i > 0; i--) {
        for (j = 0; j < i; j++) {
            if (a[j] > a[j + 1]) swap(&a[j], &a[j + 1]);
        }
    }
}

int main(void)
{
    int i;
    int nums[] = { 5, 1, 23, 13, 8, 3, 7, 6, 12, 3 };
    sort2(nums, 10);
    for (i = 0; i < 10; i++) {
        printf("%3d", nums[i]);
    }
    putchar('\n');

    return 0;
}
