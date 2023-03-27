#include <stdio.h>
#define NUM 5
int main(void)
{
    int x[NUM];
    for (int i = 0; i < NUM; i++) {
        printf("x[%d]: ", i);
        fscanf(stdin, "%d", &x[i]);
    }
    int tmp;
    for (int i = 0; i < NUM / 2; i++) {
        int tmp = x[i];
        x[i] = x[(NUM - 1) - i];
        x[(NUM - 1) - i] = tmp;
    }
    for (int i = 0; i < NUM; i++) {
        printf("x[%d] = %d\n", i, x[i]);
    }
    return 0;
}