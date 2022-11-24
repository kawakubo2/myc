#include <stdio.h>

void del_digit(char s[])
{
    int i = 0;
    int fill_pos = 0;
    while(s[i]) {
        if (s[i] < '0' || s[i] > '9') {
            s[fill_pos] = s[i];
            fill_pos++;
        }
        i++;
    }
    s[fill_pos] = '\0';
}

int main(void)
{
    char str[128];
    printf("文字列を入力してください: ");
    scanf("%s", str);

    del_digit(str);
    printf("|%s|\n", str);

    return 0;
}