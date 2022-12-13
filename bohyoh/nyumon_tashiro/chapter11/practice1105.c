#include <stdio.h>

int str_chnum(const char *s, int c)
{
    int cnt = 0;
    while(*s) {
        if (*s == c) {
            cnt++;
        }
        s++;
    }
    return cnt;
}

int main(void)
{
    char str[128];
    char ch;
    printf("文字列: ");
    fscanf(stdin, "%s", str);
    printf("文字: ");
    getchar();
    fscanf(stdin, "%c", &ch);
    int count = str_chnum(str, ch);

    printf("%sの中に%cは%d個あります。\n", str, ch, count);

    return 0;
}