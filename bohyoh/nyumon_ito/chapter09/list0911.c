#include <ctype.h>
#include <stdio.h>

void str_tolower(char s[])
{
    int i = 0;
    while (s[i]) {
        s[i] = tolower(s[i]);
        i++;
    }
}
void str_toupper(char s[])
{
    int i = 0;
    while(s[i]) {
        s[i] = toupper(s[i]);
        i++;
    }
}

int main(void)
{
    char str[128];
    printf("文字列を入力してください: ");
    scanf("%s", str);
    str_toupper(str);
    printf("大文字: %s\n", str);

    str_tolower(str);
    printf("小文字: %s\n", str);

    return 0;
}