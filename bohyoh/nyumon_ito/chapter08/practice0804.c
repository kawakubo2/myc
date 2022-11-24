#include <stdio.h>

#define NUMBER 5

void bsort(int a[], int size)
{
    int i, j;
    for (i = size - 1; i > 0; i--) {
        for (j = 0; j < i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main(void)
{
    int i;
    int height[NUMBER];
    for (i = 0; i < NUMBER; i++) {
        printf("%2d番目: ", i + 1); scanf("%d", &height[i]);
    }
    bsort(height, NUMBER);
    puts("--- ソート後 ---");
    for (i = 0; i < NUMBER; i++) {
        printf("%d ", height[i]);
    }
    putchar('\n');
}