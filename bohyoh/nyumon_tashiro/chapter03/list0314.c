#include <stdio.h>

int main(void) {
    int n1, n2, max;
    puts("二つの整数を入力してください");
    printf("整数1: "); fscanf(stdin, "%d", &n1);
    printf("整数2: "); fscanf(stdin, "%d", &n2);

    max = (n1 > n2) ? n1 : n2;
    printf("大きい方の値は%dです。\n", max);

    return 0;
}