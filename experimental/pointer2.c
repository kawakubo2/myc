#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void)
{

    int n1 = 8;
    int n2 = 5;

    printf("swap前:");
    printf("x = %d, y = %d\n", n1, n2);
    swap(&n1, &n2);

    printf("swap後:");
    printf("x = %d, y = %d\n", n1, n2);

    return 0;
}

