#include <stdio.h>

void swap(int *a, int *b) {// int *型
    printf("swap関数開始\n");
    printf("a = %d, b = %d\n", *a, *b);
    int tmp = *a;
    *a = *b;
    *b = tmp;
    printf("swap関数終了\n");
    printf("a = %d, b = %d\n", *a, *b);
}

int main(void)
{
    int x = 8;
    int y = 5;
    printf("main::swap前\n");
    printf("x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("main::swap後\n");
    printf("x = %d, y = %d\n", x, y);

}