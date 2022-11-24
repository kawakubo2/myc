#include <stdio.h>

void del_digit(char *s)
{
    char *p = s;
    while (*s) {
        if (*s < '0' || *s > '9') {
            *p = *s;
            p++;
        }
        s++;
    }
    *p = '\0';
    s = p;
}

int main(void)
{
    char str[128];
    printf("文字列を入力してください: ");
    scanf("%s", str);

    del_digit(str);

    printf("数字文字除去後: %s\n", str);

    return 0;
}