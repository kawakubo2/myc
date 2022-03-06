#include <stdio.h>

char card16[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

int get_pos(char c) 
{
    int i = 0;
    while (1) {
        if (card16[i] == c) return i;
        i++;
    }
    return -1;
}

int cardNto10(char s[], int n, int card)
{
    int i = 0, result = 0;
    while(s[i]) {
        result = result * card + get_pos(s[i++]);
    }
    return result;
}


int main(void)
{
    int size, i = 0, card;
    char str[128];

    puts("2～16進数を10進数に変換します。");
    printf("基数を2から16の間の整数で指定して下さい:");
    scanf("%d", &card);
    if (card < 2 || card > 16) {
        printf("2～16の間の整数を入力してください。\n");
        return -1;
    }
    printf("%d進数を入力してください:", card);
    scanf("%s", str);

    size = sizeof(str) / sizeof(str[0]) - 1;
    int card10 = cardNto10(str, size, card);

    printf("%d進数%sは10進数で%dです。\n", card, str, card10);


    return 0;
}
