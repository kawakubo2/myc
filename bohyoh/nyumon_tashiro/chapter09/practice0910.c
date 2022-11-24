#include <stdio.h>

void del_digit(char s[])
{
    int i = 0, j = 0;
    while(s[i]) {
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
    char str[128];
    printf("文字列を入力してください: ");
    fscanf(stdin, "%s", str);
    del_digit(str);
    printf("%s\n", str);

    return 0;
}