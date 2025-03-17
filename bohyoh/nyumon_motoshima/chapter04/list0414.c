#include <stdio.h>

int main(void)
{
    int num;

    printf("整数は何個: "); scanf("%d", &num);

    int sum = 0;
    for (int i = 1; i <= num; i++) {
        int tmp;
        printf("No.%d: ", i); scanf("%d", &tmp);
        sum += tmp;
    }

    printf("合計値: %d\n", sum);
    printf("平均値: %.2f\n", (double)sum / num);

    return 0;
}