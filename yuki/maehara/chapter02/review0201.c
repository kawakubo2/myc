#include <stdio.h>

int main(void)
{
//    printf("%2d × %2d = %3d\n", 1, 1, 1 * 1);
//    printf("%2d × %2d = %3d\n", 2, 2, 2 * 2);
//    printf("%2d × %2d = %3d\n", 3, 3, 3 * 3);
//    printf("%2d × %2d = %3d\n", 4, 4, 4 * 4);
//    printf("%2d × %2d = %3d\n", 5, 5, 5 * 5);
//    printf("%2d × %2d = %3d\n", 6, 6, 6 * 6);
//    printf("%2d × %2d = %3d\n", 7, 7, 7 * 7);
//    printf("%2d × %2d = %3d\n", 8, 8, 8 * 8);
//    printf("%2d × %2d = %3d\n", 9, 9, 9 * 9);
//    printf("%2d × %2d = %3d\n", 10, 10, 10 * 10);
//
    for (int i = 1; i <= 99; i++) {
        printf("%2d × %2d = %4d\n", i, i, i * i);
    }

    return 0;
}