#include <stdio.h>

int str_chnum(const char s[], int c)
{
    int i = 0, count = 0;
    while(s[i]) {
        if (s[i] == c) count++;
        i++;
    }
    return count;
}

int main(void)
{
    int cnt;
    char str[128];
    int c;

    printf("検索対象文字列を入力してください: ");
    scanf("%s", str);
    getchar();
    printf("検索文字を入力してください: ");
    c = getchar();
    cnt = str_chnum(str, c);

    if (cnt != 0)
        printf("%sの中に%cは%d個あります。\n", str, c, cnt);
    else
        printf("%sの中に%cはありません。\n", str, c);

    return 0;
}

