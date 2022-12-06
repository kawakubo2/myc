#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sort3(int *n1, int *n2, int *n3)
{
    if (*n2 > *n3) swap(n2, n3);
    if (*n1 > *n2) swap(n1, n2);
    if (*n2 > *n3) swap(n2, n3);
}

int main(void)
{
    int i, j;
    int numbers[][3] = {
        { 3, 5, 7},
        { 1, 8, 4},
        { 9, 2, 3},
        { -5, 2, 6},
        { -9, -4, -3},
        { -1, -6, -4},
    };
    for (i = 0; i < 6; i++) {
        printf("sort前\n");
        printf("n1=%d, n2=%d, n3=%d\n", numbers[i][0], numbers[i][1], numbers[i][2]);
        sort3(&numbers[i][0], &numbers[i][1], &numbers[i][2]);
        printf("sort後\n");
        printf("n1=%d, n2=%d, n3=%d\n", numbers[i][0], numbers[i][1], numbers[i][2]);
        printf("\n");
    }
}