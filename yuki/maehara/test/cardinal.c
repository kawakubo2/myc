#include <stdio.h>

int index_of(char *s, int c);
int convert_card(char *str, int c);

int main(void)
{
    int r;
    int card;
    char s[16];
    printf("何進数を変換しますか？ 2,8,16から選択してください: ");
    fscanf(stdin, "%d", &card);
    printf("指定した進数の文字列を入力して下さい:");
    fscanf(stdin, "%s", s); 
    r = convert_card(s, card);
    printf("sを%s進数で表すと%dになります。\n", s, r);
}

int index_of(char *s, int c)
{
    int index = 0;
    while (*s) {
        if (*s == c) {
            return index;
        }
        s++;
        index++;
    }
    return -1;
}

int convert_card(char *str, int c) {
    char *radix = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int r = 0;
    char *s = str;
    while (*s) {
        r = r * c + index_of(radix, *s);
        s++;
    }
    return r;
}