#include <stdio.h>

int set_idx(int *v, int n)
{
    int i;
    for (i = 0; i < n; i++) {
        v[i] = i;
    }
}

int main(void)
{
    int i;
    int a[10];

    set_idx(a, 10);

    for (i = 0; i < 10; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}

