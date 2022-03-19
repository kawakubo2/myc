#include <stdio.h>

int main(void)
{
    int i, num;
    printf("要素数: "); scanf("%d", &num);
    int v[num];
    int sum = 0;
    for (i = 0; i < num; i++) {
        printf("整数: "); scanf("%d", &v[i]);
        sum += v[i];
    }
    printf("合計: %d\n", sum);
}