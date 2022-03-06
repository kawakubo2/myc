#include <stdio.h>
#include <string.h>

int str_chnum(const char *s, int c)
{
    int count = 0;
    while(*s) {
        if (*s == c) count++;
        s++;
    }
    return count;
}

int main(void)
{
    int answer;
    char c;
    char str[128];

    printf("文字列を入力してください : ");
    scanf("%s", str);
    printf("1文字入力してください : ");
    getchar();
    scanf("%c", &c);

    answer = str_chnum(str, c);

    printf("\"%s\"の中に\'%c\'は%d個含まれています。\n", str, c, answer);

    return 0;
}


