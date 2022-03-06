#include <stdio.h>

#define FAILED -1

int str_char(const char s[], char c)
{
    int i = 0;
    while(s[i]) {
        if (s[i] == c) return i;
        i++;
    }
    return FAILED;
}

int main(void)
{
    int i;
    char c;
    char s[128];
    printf("検索対象の文字列を入力してください: ");
    scanf("%s", s);
    getchar();
    printf("検索文字を入力してください: ");
    scanf("%c", &c);
    i = str_char(s, c);
    if (i != FAILED)
        printf("文字列%sの中に%cは%d番目にあります。\n", s, c, i);
    else 
        printf("文字列%sの中に%cはありません。\n", s, c);

    return 0;
}
