#include <stdio.h>

int str_chnum(const char s[], int c)
{
    int i = 0, cnt = 0;
    while (s[i]) {
        if (s[i] == c) cnt++;
        i++;
    }
    return cnt;
}

int main(void)
{
    int num;
    int search;
    char str[128];
    printf("文字列を入力してください: ");
    scanf("%s", str);
    printf("検索文字を入力してください: ");
    getchar();
    search = getchar();
    num = str_chnum(str, search);

    if (num > 0) {
        printf("%sの中に%cは%d個あります。\n", str, search, num);
    } else {
        printf("%sの中に%cはありません。\n", str, search);
    }
    return 0;
}