#include <stdio.h>

int str_char(const char s[], int c)
{
    int i = 0;
    while(s[i]) {
        if (s[i] == c) {
            return i;
        }
        i++;
    }
    return -1;
}

int main(void)
{
    int idx;
    char c;
    char s[128];
    printf("文字列を入力してください : ");
    scanf("%s", s);
    printf("検索文字を入力してください : ");
    getchar();
    c = getchar();

    idx = str_char(s, c);

    if (idx != -1) {
        printf("%sのなかに%cは%d番目にあります。\n", s, c, idx);
    } else {
        printf("%sのなかに%cはありません。\n", s, c);
    }

    return 0;
}

