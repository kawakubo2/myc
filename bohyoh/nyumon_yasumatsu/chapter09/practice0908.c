#include <stdio.h>

int get_null_pos(const char s[])
{
    int i = 0;
    while(s[i])
        i++;
    return i;
}

void put_stringr(const char s[])
{
    int i;
    int null_pos = get_null_pos(s);
    for (i = null_pos - 1; i >= 0; i--) {
        putchar(s[i]);
    }
}

int main(void)
{
    int i;
    char s[128];
    puts("入力した文字列を後ろから逆に表示します。");
    printf("文字列を入力してください:");
    scanf("%s", s);
    
    printf("「");
    put_stringr(s);
    printf("」\n");

    return 0;
}

