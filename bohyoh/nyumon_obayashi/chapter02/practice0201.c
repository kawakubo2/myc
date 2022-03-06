#include <stdio.h>

int main(void)
{
    int x, y, ans;

    printf("整数x:");
    scanf("%d", &x);
    printf("整数y:");
    scanf("%d", &y);

    ans = x * 100 / y;

    printf("xの値はyの%d%%です。\n", ans);

    return 0;
}

