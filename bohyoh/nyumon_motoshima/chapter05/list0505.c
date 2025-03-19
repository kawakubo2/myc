#include <stdio.h>

int main(void)
{
    int a[10] = {1, 2, 3, 4, 5, };
    for (int i = 0; i < 10; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}

