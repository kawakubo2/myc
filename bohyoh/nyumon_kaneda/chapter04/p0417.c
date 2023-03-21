#include <stdio.h>

int main(void)
{
    int num;
    printf("正の整数値: ");
    fscanf(stdin, "%d", &num);

    for (int i = 1; i <= num; i++) {
        printf("%2dの2乗は%4d\n", i, i * i);
    }

    return 0;
}