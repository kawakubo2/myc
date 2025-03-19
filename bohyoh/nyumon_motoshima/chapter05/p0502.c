#include <stdio.h>

#define N 5 

int main(void)
{
    int a[N];

    for (int i = 0; i < N; i++) {
        a[i] = N - i; 
    }
    for (int i = 0; i < N; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}

