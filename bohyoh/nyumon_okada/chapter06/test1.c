#include <stdio.h>

void set_array(int n[], int size, int val)
{
    int i;
    for (i = 0; i < size; i++) {
        n[i] = val;
    }
}

int main(void)
{
    int i;
    int a[] = { 1, 2, 3, 4, 5 };

    set_array(a, 5, 999);

    for (i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}
    
