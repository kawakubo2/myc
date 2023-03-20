#include <stdio.h>

int main(void)
{
    int a, b, min, sum = 0;
    printf("整数a: "); fscanf(stdin, "%d", &a);
    printf("整数b: "); fscanf(stdin, "%d", &b);
    // aがbよりも大きい場合、内容の入替
    if (a > b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    min = a;
    while (min <= b) {
        sum += min;
        min = min + 1;
    }
    printf("%d以上%d以下の全整数の合計は%dです。\n", a, b, sum);

    return 0;
}