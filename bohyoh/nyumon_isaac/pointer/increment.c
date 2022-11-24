#include <stdio.h>

void increment(int *n)
{
    (*n)++;
}

int main(void)
{
    int a = 10;
    increment(&a);
    printf("a=%d\n", a);
}