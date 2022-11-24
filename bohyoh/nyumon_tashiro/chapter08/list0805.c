#include <stdio.h>

#define NUMBER 5

void bsort(int a[], int n)
{
    int i, j;
    for (i = n - 1; i > 0; i--) {
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
    int a[] = { 51, 12, 8, 73, 16 };
    bsort(a, NUMBER);
    for (i = 0; i < NUMBER; i++) {
        printf("%d ", a[i]);
    }
    putchar('\n');
}