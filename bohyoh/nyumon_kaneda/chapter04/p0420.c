#include <stdio.h>

int main(void)
{
    // 1行目
    printf("%s", "   |");
    for (int i = 1; i <= 9; i++) {
        printf("%3d", i);
    }
    putchar('\n');
    // 2行目
    printf("%s", "---+");
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 3; j++) {
            putchar('-');
        }
    }
    putchar('\n');
    // 1～9の行
    for (int i = 1; i <= 9; i++) {
        printf("%2d |", i);
        for (int j = 1; j <= 9; j++) {
            printf("%3d", i * j);
        }
        putchar('\n');
    }
}