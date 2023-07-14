#include <stdio.h>

void del_digit(char s[])
{
    int i, j = 0;
    while (s[i]) {
        if (s[i] < '0' || s[i] > '9') {
            s[j] = s[i];
            j++;
        }
        i++;
    }
    s[j] = '\0';
}

int main(void)
{
    char s[128];
    printf("文字列を入力してください: ");
    fscanf(stdin, "%s", s);

    del_digit(s);
    printf("数字文字除去後: %s\n", s);


    return 0;
}