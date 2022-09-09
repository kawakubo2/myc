#include <stdio.h>

int main(void)
{
    int height;
    double std_weight;

    printf("身長を入力してください: ");
    scanf("%d", &height);

    std_weight = (height - 100) * 0.9;
    printf("標準体重は%.1fです。\n", std_weight);

    return 0;
}