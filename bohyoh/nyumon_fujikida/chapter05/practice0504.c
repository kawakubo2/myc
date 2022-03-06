#include <stdio.h>

int main(void)
{
    int i;
    int a[5] = { 17, 23, 36 };
    int b[5];

    for (i = 0; i < 5; i++) {
        b[4 - i] = a[i];
    }

    printf("---< 配列a >---\n");
    for (i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
    printf("---< 配列b >---\n");
    for (i = 0; i < 5; i++) {
        printf("b[%d] = %d\n", i, b[i]);
    }

    return 0;
}

