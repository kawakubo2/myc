#include <stdio.h>

void set_idx(int *v, int n)
{
    int i;
    for(i = 0; i < n; i++) {
        *(v + i) = i; //  *(v + i) => v[i]
    }
}

int main(void)
{
    int i;
    int num[3] = {0};
    set_idx(num, 3);

    for (i = 0; i < 3; i++) {
        printf("%2d", num[i]);
    }
    putchar('\n');
}