#include <stdio.h>

void del_digit(char s[])
{
    int i = 0, j = 0;
    while(s[i]) {
        if (s[i] < '0' || s[i] > '9') {
            s[j++] = s[i];
        }
        i++;
    }
    s[j] = '\0';
}

int main(void)
{
    char str[128];
    printf("文字列を入力してください:");
    scanf("%s", str);

    del_digit(str);
    printf("数字文字を削除した文字列: [%s]\n", str);

    return 0;
}

