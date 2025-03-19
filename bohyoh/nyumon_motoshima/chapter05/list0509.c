#include <stdio.h>

#define NUMBER 5

int main(void)
{
    int tensu[NUMBER];
    int sum = 0;

    printf("%d人の点数を入力してください。\n", NUMBER);
    for (int i = 0; i < NUMBER; i++) {
        printf("%2d番: ", i + 1); scanf("%d", &tensu[i]);
        sum += tensu[i];
    }

    printf("合計点: %d\n", sum);
    printf("平均点: %.1f\n", (double)sum / NUMBER);

    return 0;
}

