#include <stdio.h>

int max2(int a, int b)
{
    return a > b ? a : b;
}
int max4(int a, int b, int c, int d)
{
    return max2(max2(a, b), max2(c, d));
}

int main(void)
{
    int n1, n2, n3, n4;
    puts("四つの整数を入力してください");
    printf("整数1: "); fscanf(stdin, "%d", &n1);
    printf("整数2: "); fscanf(stdin, "%d", &n2);
    printf("整数3: "); fscanf(stdin, "%d", &n3);
    printf("整数4: "); fscanf(stdin, "%d", &n4);

    printf("最も大きい値は%dです。\n", max4(n1, n2, n3, n4));
}