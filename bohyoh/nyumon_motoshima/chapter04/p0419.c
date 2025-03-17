#include <stdio.h>

int main(void)
{
    int n;
    printf("整数: "); scanf("%d", &n);

    int counter = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            counter++;
            printf("%d\n", i);
        }
    }
    printf("約数は%d個です。\n", counter);

    return 0;
}

