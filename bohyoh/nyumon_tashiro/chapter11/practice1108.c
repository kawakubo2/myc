#include <stdio.h>

void del_digit(char *s)
{
    char *temp = s;
    while(*s) {
        if (*s >= '0' && *s <= '9') {
            s++;
            continue;
        }
        *temp = *s;
        temp++;
        s++; 
    }
    *temp = '\0';
}

int main(void)
{
    char str[128];
    printf("文字列を入力してください: ");
    fscanf(stdin, "%s", str);
    del_digit(str);
    printf("数字抜き文字列: %s\n", str);

    return 0;
}