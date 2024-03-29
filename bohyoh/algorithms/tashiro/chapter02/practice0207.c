#include <stdio.h>

int card_convr(unsigned x, int n, char d[])
{
    int i;
    char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int digits = 0;
    if (x == 0) {
        d[digits++] = dchar[0];
    } else {
        while (x) {
            for (i = digits; i > 0; i--) {
                d[i] = d[i - 1];
            }
            d[0] = dchar[x % n];
            printf("%2d | %8d  --- %c\n", n, x, d[0]);
            printf("   +----------\n");
            x /= n;
            digits++;
        }
        printf("            0\n");
    }
    return digits;
}

int main(void)
{
    int i;
    unsigned no;
    int cd;
    int dno;
    char cno[512];
    int retry;
    puts("10進数を基数変換します。");
    do {
        printf("変換する非負の整数: ");
        fscanf(stdin, "%u", &no);
        do {
            printf("何進数にしますか(2-36): ");
            fscanf(stdin, "%d", &cd);
        } while (cd < 2 || cd > 36);
        dno = card_convr(no, cd, cno);
        printf("%d進数では", cd);
        for (i = 0; i <= dno; i++) {
            printf("%c", cno[i]);
        }
        printf("です。\n");
        printf("もう一度しますか(1...はい/2...いいえ) : ");
        fscanf(stdin, "%n", &retry);
    } while (retry == 1);
}