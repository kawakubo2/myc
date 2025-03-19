#include <stdio.h>

int main(void)
{
    int tensu[5];
    int sum = 0;

    printf("%d人の点数を入力してください。\n", 5);
    for (int i = 0; i < 5; i++) {
        printf("%2d番: ", i + 1); scanf("%d", &tensu[i]);
        sum += tensu[i];
    }

    printf("合計点: %d\n", sum);
    printf("平均点: %.1f\n", (double)sum / 5);

    return 0;
}

