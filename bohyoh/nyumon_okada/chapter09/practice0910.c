#include <stdio.h>

int str_len(const char s[])
{
    int i = 0, counter = 0;
    while(s[i++]) counter++;
    return counter;
}

void del_digit(char s[])
{
    int i =  0, j = 0;
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
    printf("文字列を入力してください : ");
    scanf("%s", str);

    del_digit(str);

    printf("%s\n", str);

    return 0;
}

