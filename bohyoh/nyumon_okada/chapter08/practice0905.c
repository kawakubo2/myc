#include <stdio.h>

int str_char(const char s[], int c)
{
    int i = 0,counter = 0;
    while(s[i]) {
        if (s[i] == c) return i;
        i++;
    }
    return -1;
}

int main(void)
{
    int pos, i;
    char search;
    char str[64];
    printf("文字列を入力してください : ");
    scanf("%s", str);
    printf("検索文字 : ");
    getchar();
    scanf("%c", &search);

    pos = str_char(str, search);
    if (pos != -1)
        printf("%sのなかに%cは%d番目に存在します。\n", str, search, pos);
    else
        printf("%sのなかに%cは存在しません。\n", str, search);

    return 0;
}

