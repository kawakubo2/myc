#include <stdio.h>

void print_array(int nums[][4], int size)
{
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = 0; j < 4; j++) {
            printf("%2d, ", nums[i][j]);
        }
        putchar('\n');
    }
}

int main(void)
{
    int i, j;

    int numbers1[][4] = {{1, 2, 3, 4 }, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int numbers2[3][4];
    int numbers5[][4] = {{ 8, 7, 6, 5}, {4, 3, 2, 1 }};
    print_array(numbers5, sizeof(numbers5) / sizeof(numbers5[0]));

    int numbers3[3][4] = {0};
    print_array(numbers3, sizeof(numbers3) / sizeof(numbers3[0]));

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            numbers2[i][j] = numbers1[i][j];
        }
    }
    print_array(numbers2, 3);            

    int numbers4[5] = {0};
    int size = sizeof(numbers4) / sizeof(numbers4[0]);
    for (i = 0; i < size; i++) {
        printf("%d,", numbers4[i]);
    }
    putchar('\n');

    return 0;
}
