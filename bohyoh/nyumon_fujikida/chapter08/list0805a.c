#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bsort(int a[], int n)
{
    int i, j;
    for (i = n - 1; i > 0; i--) {
        for (j = 0; j < i; j++) {
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}

void print_array(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    putchar('\n');
}

int main(void)
{
    int i;
    int nums[] = { 5, 11, 38, 18, 9, 2, 28, 7, 19, 19 };
    puts("---< sort前 >---");
    print_array(nums, 10);

    bsort(nums, 10);

    puts("---< sort前 >---");
    print_array(nums, 10);

    return 0;
}

