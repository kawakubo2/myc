#include <stdio.h>

void swap(int *p1, int *p2)
{
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

int main(void)
{
    int x = 8;
    int y = 5;
    printf("交換前: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("交換後: x = %d, y = %d\n", x, y);

    return 0;
}
