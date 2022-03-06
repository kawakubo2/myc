#include <stdio.h>

int main(void)
{
    int n1, n2, max;
    puts("2つの整数を入力してください");
    printf("n1 : "); scanf("%d", &n1);
    printf("n2 : "); scanf("%d", &n2);

    if (n1 >= n2) {
        max = n1;
    } else {
        max = n2;
    }

    printf("大きい方の値は%dです。\n", max);

    max = n1 >= n2 ? n1 : n2;

    printf("大きい方の値は%dです。\n", max);

    return 0;
}
