#include <stdio.h>

void swap(int *px, int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}

int main(void)
{
    double da, db;

    puts("二つの実数を入力してください。");
    printf("実数A : "); scanf("%lf", &da);
    printf("実数B : "); scanf("%lf", &db);

    swap(&da, &db);

    puts("これらの値を交換しました。");
    printf("実数Aは%fです。\n", da);
    printf("実数Bは%fです。\n", db);

    return 0;
}
