#include <stdio.h>

int sumup(int n)
{
    int result = 0;
    for (int i = 1; i <= n; i++) {
        result += i;
    }
    return result;
}
int main(void)
{
    int a;
    puts("入力した整数値aまでの総和を求めます");
    printf("整数a: "); fscanf(stdin, "%d", &a);
    printf("1～%dまでの総和は%dです。\n", a, sumup(a));

    return 0;
}