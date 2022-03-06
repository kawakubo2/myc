#include <stdio.h>

int card_conv(int n, int card) {
    /* 基数が2～36の範囲外であればエラーとする */
    if (card < 2 || card > 36) return 0;

    char cnum[36] = "0123456789abcdefghijklmnopqrstuvwxyz";
    char char_num[64];
    int i, size = 0;
    while(n > 0) {
        char_num[size++] = cnum[n % card];
        n /= card;
    }
    for (i = size - 1; i >= 0; i--) {
        putchar(char_num[i]);
    }
    putchar('\n');

    return 1;
}

int main(void)
{
    int a, card;
    printf("10進数を2～36進数へ変換します。\n");
    printf("正数を入力してください : ");
    scanf("%d", &a);
    
    printf("何進数に変換するか2～36の整数を入力してください : ");
    scanf("%d", &card);

    card_conv(a, card);

    return 0;
}

