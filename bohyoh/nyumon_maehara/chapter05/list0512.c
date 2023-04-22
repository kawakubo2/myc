#include <stdio.h>

#define NUMBER 120

void print_aster(int n)
{
    for (int i = 0; i < n; i++) {
        putchar('*');
    }
}

int main(void)
{
    int num;
    int tensu[NUMBER];
    int bunpu[11] = {0};
    
    printf("人数を入力してください\n");
    do {
        fscanf(stdin, "%d", &num);
        if (num < 1 || num > NUMBER) {
            printf("1～%d人で入力してください。\n", NUMBER);
        }
    } while (num < 1 || num > NUMBER);
    printf("%d人の点数を入力してください\n", num);

    for (int i = 0; i < num; i++) {
        printf("%2d番: ", i + 1);
        do {
            fscanf(stdin, "%d", &tensu[i]);
            if (tensu[i] < 0 || tensu[i] > 100) {
                printf("0から%dで入力してください:", 100);
            }
        } while (tensu[i] < 0 || tensu[i] > 100);
        bunpu[tensu[i] / 10]++;
    }

    puts("\n---分布グラフ---");
    printf("      100: ");
    print_aster(bunpu[10]);
    putchar('\n');

    for (int i = 9; i >= 0; i--) {
        printf("%3d ～%3d: ", i * 10, i * 10 + 9);
        print_aster(bunpu[i]);
        putchar('\n');
    }

    return 0;

}