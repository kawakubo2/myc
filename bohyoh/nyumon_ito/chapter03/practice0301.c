#include <stdio.h>

int main(void)
{
    int a, b;
    printf("整数A: "); scanf("%d", &a);
    printf("整数B: "); scanf("%d", &b);

    if (a % b) {
        printf("%dは%dの約数ではありません。\n", b, a);
    } else {
        printf("%dは%dの約数です。\n", b, a);
    }
    return 0;
}