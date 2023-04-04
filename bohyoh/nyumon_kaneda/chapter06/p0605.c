#include <stdio.h>

int sumup(int n)
{
    int total = 0;
    for (int i = 1; i <= n; i++) {
        total += i; // total = total + i;
    }
    return total;
}

int main(void)
{
    int n;
    puts("1から入力した値までの総和を求めます。");
    printf("整数: ");
    fscanf(stdin, "%d", &n);
    int ans = sumup(n);
    printf("1～%dまでの総和は%dです。\n", n, ans);

    return 0;
}