#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, max;
    puts("四つの整数を入力してください");
    printf("整数1: "); fscanf(stdin, "%d", &n1);
    printf("整数2: "); fscanf(stdin, "%d", &n2);
    printf("整数3: "); fscanf(stdin, "%d", &n3);
    printf("整数4: "); fscanf(stdin, "%d", &n4);

    max = n1;
    if (n2 > max) max = n2;
    if (n3 > max) max = n3;
    if (n4 > max) max = n4;

    printf("一番大きい値は%dです。\n", max);

    return 0;
}