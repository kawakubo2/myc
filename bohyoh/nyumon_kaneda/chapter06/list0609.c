#include <stdio.h>

int scan_positive_int(void)
{
    int tmp;
    do {
        printf("正の整数を入力してください: ");
        fscanf(stdin, "%d", &tmp);
        if (tmp <= 0) {
            puts("正でない数を入力しないでください。");
        }
    } while (tmp <= 0);
    return tmp;
}

int reverse_int(int num)
{
    int tmp = 0;
    if (num > 0) {
        do {
            tmp = tmp * 10 + num % 10;
            num /= 10;
        } while (num > 0);
    }
    return tmp;
}

int main(void)
{
    int nx = scan_positive_int();
    printf("反転した値は%dです。\n", reverse_int(nx));

    return 0;
}