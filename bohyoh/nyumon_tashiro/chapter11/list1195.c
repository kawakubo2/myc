#include <stdio.h>

int main(void)
{
    int a[3];
    int *p = &a[0];
    for (int i = 0; i < 3; i++) {
        *p = i * i;
        p++;
    }
    for (int i = 0; i < 3; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}