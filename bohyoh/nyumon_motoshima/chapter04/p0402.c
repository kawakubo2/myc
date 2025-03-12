#include <stdio.h>

int main(void)
{
    int n1, n2, i;
    int sum = 0;
    printf("整数1: "); scanf("%d", &n1);
    printf("整数2: "); scanf("%d", &n2);

    if (n1 > n2) {
        int tmp = n1;
        n1 = n2;
        n2 = tmp;
    }

    i = n1;
    do {
        sum = sum + i;
        i = i + 1; // ---> i += 1 ---> i++
    } while(i <= n2);

    printf("%d～%dまでの合計は%dです。\n", n1, n2, sum);

    return 0;
}