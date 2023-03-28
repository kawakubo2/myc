#include <stdio.h>

#define NUMBER 120

int main(void)
{
    int num, max;
    int tensu[NUMBER];
    int bunpu[11] = {0};

    printf("人数を入力してください: ");
    do {
        fscanf(stdin, "%d", &num);
        if (num < 1 || num > NUMBER) {
            printf("1～%dで入力してください: ", NUMBER);
        }
    } while (num < 1 || num > NUMBER);

    printf("%d人の点数を入力してください: \n", NUMBER);
    for (int i = 0; i < num; i++) {
        do {
            printf("%2d番: ", i + 1);
            fscanf(stdin, "%d", &tensu[i]);
            if (tensu[i] < 0 || tensu[i] > 100) {
                printf("1～100で入力してください。");
            }
        } while (tensu[i] < 0 || tensu[i] > 100);
        bunpu[tensu[i] / 10]++;
    }

    puts("\n---分布グラフ---");
    for (int i = 3; i >= 1; i--) {
        for (int j = 0; j <= 10; j++) {
            printf("%s", bunpu[j] >= i ? "  *": "   ");
        }
        putchar('\n');
    }
    for (int i = 0; i <= 10; i++) {
        printf("%s", "---");
    }
    putchar('\n');
    for (int i = 0; i < 10; i++) {
        printf("%3d", i * 10);
    }
    printf("%4d", 100);
    putchar('\n');
    return 0;
}