#include <stdio.h>

void print_array(int nums[][5], int n, int m)
{
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", (*(nums + i))[j]);
        }
    }
    putchar('\n');

}

int main(void)
{
    int nums[][5] = {
        { 0, 1, 2, 3, 4 },
        { 5, 6, 7, 8, 9 }
    };
    print_array(nums, 2, 5);

    return 0;
}
    
