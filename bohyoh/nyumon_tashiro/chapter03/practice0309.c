#include <stdio.h>

int main(void)
{
    int n1, n2, n3, min;
    puts("三つの整数を入力してください");
    printf("整数1: "); fscanf(stdin, "%d", n1);
    printf("整数2: "); fscanf(stdin, "%d", n2);
    printf("整数3: "); fscanf(stdin, "%d", n3);

    min = n1;
    min = (n2 < min) ? n2: min;
    min = (n3 < min) ? n3: min;
}