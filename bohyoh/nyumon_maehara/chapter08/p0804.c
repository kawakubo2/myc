#include <stdio.h>

#define NUMBER 5

void bsort(int a[], int n)
{
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void print_array(const int a[], int n)
{
    printf("{ ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("}\n");
}

int main(void)
{
    int nums[NUMBER];
    printf("整数値を%d個入力してください。\n", NUMBER);
    for (int i = 0; i < NUMBER; i++) {
        printf("nums[%d]: ", i); fscanf(stdin, "%d", &nums[i]);
    }
    puts("ソート前");
    print_array(nums, NUMBER);
    bsort(nums, NUMBER);
    puts("ソート後");
    print_array(nums, NUMBER);

    return 0;
}