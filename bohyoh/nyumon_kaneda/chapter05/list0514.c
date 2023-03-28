#include <stdio.h>

#define NUM 5

int main(void)
{
    int a[NUM];
    int b[NUM];

    for (int i = 0; i < NUM; i++) {
        printf("a[%d]: ", i); fscanf(stdin, "%d", &a[i]);
    }

    int count = 0;
    for (int i = 0; i < NUM; i++) {
        if (a[i] > 0) {
            b[count++] = a[i];
        }
    }
    for (int i = 0; i < count; i++) {
        printf("b[%d] = %d\n", i, b[i]);
    }

    return 0;
}