#include <stdio.h>

void print_array(int n[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", n[i]);
    }
    putchar('\n');
}

int main(void)
{
    int v1[] = {42, 46, 14, 52, 53, 66, 18, 53, 92, 16, 82 };

    int len = sizeof(v1) / sizeof(v1[0]);

    print_array(v1, len);

    return 0;
}
