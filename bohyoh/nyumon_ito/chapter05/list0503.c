#include <stdio.h>

#define NUM 10

int main(void)
{
    int i;
    int v[NUM];

    for (i = 0; i < NUM; i++)
        v[i] = i + 1;

    for (i = 0; i < NUM; i++)
        printf("v[%d] = %d\n", i, v[i]);

    return 0;
}