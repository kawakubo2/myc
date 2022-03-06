#include <stdio.h>

void del_digit(char *str)
{
    char *tmp = str;
    while(*tmp) {
        if (*tmp < '0' || *tmp > '9') {
            *str = *tmp;
            str++;
        }
        tmp++;
    }
    *str = '\0';
}

int main(void)
{
    char str[128];
    puts("文字列を入力してください。数字文字を削除します。");
    printf("文字列 : "); scanf("%s", str);
    del_digit(str);
    printf("%s\n", str);

    return 0;
}

