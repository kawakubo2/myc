#include <stdio.h>

void twice(int *ptr) 
{
    *ptr *= 2;
}

int main(void)
{
    int n = 5;
    twice(&n);
    printf("n=%d\n", n);

    return 0;
}