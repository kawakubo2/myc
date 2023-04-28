#include <stdio.h>

int main(void)
{
    int a[5];
    int b[5];
    for (int i = 0; i < 5; i++) {
        printf("a[%d]: ", i);
        fscanf(stdin, "%d", &a[i]);
    }
    int count = 0;
    for (int i = 0; i < 5; i++) {
        if (a[i] > 0) {
            b[count++] = a[i];
        }
    }
    for (int i = 0; i < count; i++) {
        printf("b[%d] = %d\n", i, b[i]);
    }
    return 0;
}