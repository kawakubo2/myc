#include <stdio.h>

int main(void)
{
    int i;
    int v1[5] = {1, 2, 3, 4, 5};
    for (i = 0; i < 5; i++) {
        printf("%d ", v1[i]);
    }
    putchar('\n');

    int v2[5] = {1, 2, 3};
    for (i = 0; i < 5; i++) {
        printf("%d ", v2[i]);
    }
    putchar('\n');

    int v3[5] = {0};
    for (i = 0; i < 5; i++) {
        printf("%d ", v3[i]);
    }
    putchar('\n');

    int v4[] = { 1, 2, 3, 4, 5 };
    for (i = 0; i < 5; i++) {
        printf("%d ", v4[i]);
    }
    putchar('\n');

    return 0;
}

