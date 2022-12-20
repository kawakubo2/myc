#include <stdio.h>

char *str_chr(const char *s, int c)
{
    while(*s) {
        if (*s == c) {
            return s;
        }
        s++;
    }
    return NULL;
}

int main(void)
{
    char str[128];
    char target[10];
    char c;
    printf("文字列: ");
    fscanf(stdin, "%s", str);
    printf("文字: ");
    fscanf(stdin, "%s", target);
    c = target[0];

    char *result = str_chr(str, c);
    if (*result) {
        printf("%s\n", result);
    }

    return 0;
}