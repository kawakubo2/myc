#include <stdio.h>

int gcd(int n1, int n2)
{
    while(1) {

        int temp;
        if (n2 > n1) {
            temp = n1;
            n1 = n2;
            n2 = temp;
        }
        int remainder = n1 % n2;
        if (remainder == 0) {
            return n2;
        }
        n1 = n2;
        n2 = remainder;
    }
}

int main(void)
{
    int a, b;
    puts("最大公約数を求めます");
    printf("整数1 : ");
    scanf("%d", &a);
    printf("整数2 : ");
    scanf("%d", &b);

    printf("%dと%dの最大公約数は%dです。\n", a, b, gcd(a, b));

    return 0;
}
