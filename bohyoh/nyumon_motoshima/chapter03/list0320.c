#include <stdio.h>

int main(void)
{
    int n;
    printf("整数: "); scanf("%d", &n);

    switch(n % 3) {
        case 0:
            puts("3で割り切れます。");
            break;
        case 1:
            puts("3で割った剰余は1です。");
            break;
        case 2:
            puts("3で割った剰余は2です。");
            break;
    }
    return 0;
}