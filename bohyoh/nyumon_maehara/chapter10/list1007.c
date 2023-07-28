#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void)
{
    int a, b;

    puts("二つの整数を入力してください。");
    printf("整数A: "); fscanf(stdin, "%d", &a);
    printf("整数B: "); fscanf(stdin, "%d", &b);

    swap(&a, &b);

    puts("これらの値を交換しました。");
    printf("整数Aは%dです。\n", a);
    printf("整数Bは%dです。\n", b);

    return 0;
}