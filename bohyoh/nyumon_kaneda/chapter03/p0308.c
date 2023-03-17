#include <stdio.h>

int main(void)
{
    int n1, n2, diff;
    puts("二つの整数を入力せよ。");
    printf("整数1: "); fscanf(stdin, "%d", &n1);
    printf("整数2: "); fscanf(stdin, "%d", &n2);
    if (n1 > n2) {
        diff = n1 - n2;
    } else {
        diff = n2 - n1;
    }
    printf("それらの差は%dです。\n", diff);
    return 0;
}