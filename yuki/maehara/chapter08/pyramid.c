#include <stdio.h>

void print_char(int n, char c)
{
    for (int i = 0; i < n; i++) {
        putchar(c);
    }
}

int main(void)
{
    int i, dansu;
    printf("ピラミッドの段数: ");
    fscanf(stdin, "%d", &dansu);
    // printf("dansu: %d\n", dansu);
    for (i = 1; i <= dansu; i++) {
        print_char(dansu - i, '-');
        print_char(i * 2 - 1, '*');
        print_char(dansu - i, '-');
        printf("\n");
    }
    return 0;
}