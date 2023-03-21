#include <stdio.h>

int main(void)
{
    int num;
    printf("正の整数: ");
    fscanf(stdin, "%d", &num);

    for (int i = 1; i <= num; i++) {
        printf("%d", i % 10);
    }
    putchar('\n');
}