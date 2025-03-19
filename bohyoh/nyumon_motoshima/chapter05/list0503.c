#include <stdio.h>

#define N 10 

int main(void)
{
    int a[N];

    for (int i = 0; i < N; i++) {
        a[i] = i + 1;
    }
    for (int i = 0; i < N; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}

