#include <stdio.h>

int str_length(const char *s)
{
    int len = 0;
    while(*s++) {
        len++;
    }
    return len;
}
int main(void)
{
    char str[128];
    printf("文字列: "); fscanf(stdin, "%s", str);
    printf("文字列\"%s\"の長さは%dです。\n", str, str_length(str));

    return 0;
}