#include <stdio.h>

int str_chnum(const char *s, int c)
{
    int count = 0;
    while(*s) { 
        if (*s++ == c) count++;
    }
    return count;
}

int main(void)
{
    char str[128];
    int c;
    printf("文字列を入力してください : ");
    scanf("%s", str);
    getchar();
    printf("1文字入力してください : ");
    c = getchar();
    printf("%sの中に%cは%d個含まれています。\n", str, c, str_chnum(str, c));

    return 0;
}

