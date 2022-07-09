#include <stdio.h>

#define NUMBER 5

int tensu[NUMBER];

int top(void);

int main(void)
{
    extern int tensu[];
    int i;
    printf("%d人の点数を入力してください。\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        printf("%d : ", i + 1); scanf("%d", &tensu[i]);
    }
    printf("最高点=%d\n", top());

    return 0;
}

int top(void)
{
    extern int tensu[];
    int i;
    int max = tensu[0];
    for (i = 1; i < NUMBER; i++) {
        if (tensu[i] > max)
            max = tensu[i];
    }
    return max;
}