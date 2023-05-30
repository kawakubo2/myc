#include <stdio.h>
int scan_pint()
{
    int n;
    do {
        printf("正の整数を入力してください。");
        fscanf(stdin, "%d", &n);
    } while (n <= 0);
}
void pyramid(int dansu)
{
    for (int i = 1; i <= dansu; i++) {
        for (int j = 0; j < dansu - i; j++) {
            putchar(' ');
        }
        for (int j = 0; j < i * 2 - 1; j++) {
            putchar('*');
        }
        for (int j = 0; j < dansu - i; j++) {
            putchar(' ');
        }
        putchar('\n');
    }
}
int main(void)
{
    puts("ピラミッドを作ります。");
    int d = scan_pint();
    pyramid(d);
    return 0;
}