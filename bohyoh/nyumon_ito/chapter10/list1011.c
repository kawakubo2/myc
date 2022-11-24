#include <stdio.h>

void ary_set(int *v, int n, int val)
{
    //
    //*(v + 2 + i) = 99
    //
    int i;
    for (i = 0; i < n; i++) {
        v[i] = val; // *(v + i) = val
    }
}

int main(void)
{
    int i;
    int a[] = {1, 2, 3, 4, 5};
    ary_set(&a[2], 2, 99);

    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    putchar('\n');
}