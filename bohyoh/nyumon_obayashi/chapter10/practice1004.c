#include <stdio.h>

void set_idx(int *v, int n)
{
    int i;
    for (i = 0; i < n; i++) {
        v[i] = i;
    }
}

int main(void)
{
    int i;
    int a[] = { 5, 4, 9, 7, 3 };

    set_idx(a, 5);

    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

