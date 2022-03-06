#include <stdio.h>

void del_digit(char *str)
{
    char *temp = str;
    while (*temp) {
        if (*temp < '0' || *temp > '9') {
            *str = *temp;
            str++;
        }
        temp++;
    }
    *str = '\0';
}

int main(void)
{
    char str[128];
    printf("文字列を入力してください : ");
    scanf("%s", str);

    del_digit(str);

    printf("%s\n", str);

    return 0;
}

