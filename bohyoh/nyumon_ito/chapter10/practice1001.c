#include <stdio.h>

void adjust_point(int *n)
{
    if (*n < 0) *n = 0;
    if (*n > 100) *n = 100;
}
int main(void)
{
    int num;
    printf("0～100の値を入力してください: ");
    scanf("%d", &num);
    printf("入力した値: %d\n", num);
    adjust_point(&num);
    printf("設定された値: %d\n", num);

    return 0;
}