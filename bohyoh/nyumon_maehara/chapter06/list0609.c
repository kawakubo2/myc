#include <stdio.h>

int scan_pint()
{
    int result;
    do {
        printf("正の整数を入力してください: "); fscanf(stdin, "%d", &result);
    } while (result <= 0 && puts("\a正でない数を入力しないでください。"));
    return result;
}
int rev_int(int num)
{
    int result = 0;
    if (num > 0) {
        do {
            result = result * 10 + num % 10;
            num /= 10;
        } while (num > 0);
    }
    return result;
}

int main(void)
{
    int nx = scan_pint();
    printf("反転した値は%dです。\n", rev_int(nx));
    return 0;
}