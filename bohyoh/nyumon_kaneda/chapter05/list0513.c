#include <stdio.h>

#define NUM 5

int main(void)
{
    int a[NUM];
    int b[NUM];
    for (int i = 0; i < NUM; i++) {
        printf("a[%d]: ", i);
        fscanf(stdin, "%d", &a[i]);
    }
    for (int i = 0; i < NUM; i++) {
        b[i] = a[i];
    }

    puts("   a   b");
    puts("--------");
    for (int i = 0; i < NUM; i++) {
        printf("%4d%4d\n", a[i], b[i]);
    }

    return 0;
}