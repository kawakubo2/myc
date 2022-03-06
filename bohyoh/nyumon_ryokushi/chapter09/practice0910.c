#include <stdio.h>

void del_digit(char s[])
{
    int i = 0, ip = 0;
    while (s[i]) {
        if (s[i] < '0' || s[i] > '9') {
            s[ip++] = s[i];
        }
        i++;
    }
    s[ip] = '\0';
}

int main(void)
{
    char s[128];
    printf("文字列を入力してください : ");
    scanf("%s", s);

    del_digit(s);

    printf("%s\n", s);

    return 0;
}

