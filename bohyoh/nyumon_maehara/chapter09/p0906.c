#include <stdio.h>

int str_chnum(const char s[], int c)
{
    int cnt = 0, i = 0;
    while(s[i]) {
        if (s[i++] == c) cnt++;
    }
    return cnt;
}

int main(void)
{
    char s[128];
    char temp[10];
    char c;
    int count;
    puts("文字列の中に指定した文字が何個あるか調べます。");
    printf("検索対象文字列: ");
    fscanf(stdin, "%s", s);
    printf("検索文字: ");
    fscanf(stdin, "%s", temp);
    c = temp[0];
    count = str_chnum(s, c);
    if (count) {
        printf("%sの中に%cは%d個あります。\n", s, c, count);
    } else {
        printf("%sの中に%cは存在しません。\n", s, c);
    }

    return 0;
}