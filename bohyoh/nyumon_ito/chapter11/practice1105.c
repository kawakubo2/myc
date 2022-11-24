#include <stdio.h>
#include <string.h>

int str_chnum(const char *s, int c)
{
    int count = 0;
    while (*s) {
        if (*s == c) count++;
        s++;
    }
    return count;
}
int main(void)
{
    char str[123];
    char c;
    int count;
    printf("文字列を入力してください: ");
    scanf("%s", str);
    printf("検索文字: ");
    getchar();   
    scanf("%c", &c);
    count = str_chnum(str, c);
    printf("%sの中に\'%c\'は%d個含まれています。\n", str, c, count);
    return 0;
}