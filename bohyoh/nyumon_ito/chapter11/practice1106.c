#include <stdio.h>

char *str_chr(char *s, int c)
{
    while (*s) {
        if (*s == c) return s;
        s++;
    }
    return NULL;
}
int main(void)
{
    char str[123];
    char c;
    char *ptr;
    printf("文字列を入力してください: ");
    scanf("%s", str);
    printf("検索文字: ");
    getchar();
    scanf("%c", &c);   
    ptr = str_chr(str, c);
    if (ptr) {
        printf("%s\n", ptr);
    } else {
        printf("検索文字\'%c\'は見つかりませんでした。\n", c);
    }
    return 0;
}