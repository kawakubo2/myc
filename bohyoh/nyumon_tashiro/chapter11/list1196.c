#include <stdio.h>

void add10(int *x)
{
    *x += 10;
}

int main(void)
{
    int n = 3;
    add10(&n);
    printf("n = %d\n", n);

    return 0;    
}