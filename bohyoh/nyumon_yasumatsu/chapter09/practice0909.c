#include <stdio.h>

int get_null_pos(const char s[])
{
    int i = 0;
    while(s[i])
        i++;
    return i;
}

void rev_string(char s[])
{
    int i;
    int null_pos = get_null_pos(s);
    char tmp;
    for (i = 0; i < null_pos / 2; i++) {
        tmp = s[i];
        s[i] = s[null_pos - 1 - i];
        s[null_pos - 1 - i] = tmp;
    }
}

int main(void)
{
    int i;
    char s[128];
    puts("入力した文字列を反転します。");
    printf("文字列を入力してください:");
    scanf("%s", s);
    
    printf("「");
    rev_string(s);
    printf("%s」\n", s);

    return 0;
}

