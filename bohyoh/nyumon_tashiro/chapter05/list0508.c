#include <stdio.h>

int main(void)
{
    int i;
    int x[7];
    for (i = 0; i < 7; i++) {
        printf("x[%d]: ", i);
        fscanf(stdin, "%d", &x[i]);
    }
    for (i = 0; i < 7 / 2; i++) {
        int temp = x[i];
        x[i] = x[7 - 1 - i];
        x[7 - 1 - i] = temp;
    }
    for (i = 0; i < 7; i++) {
        printf("x[%d] = %d\n", i, x[i]);
    }
    return 0;
}