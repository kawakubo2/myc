#include <stdio.h>

int str_length(const char s[])
{
    int i = 0;
    while(s[i]) {
        i++;
    }
    return i;
}
void put_stringr(const char s[])
{
    int len = str_length(s);
    for (int i = len - 1; i >= 0; i--) {
        putchar(s[i]);
    }
}
int main(void)
{
    char s[128];
    int len;
    printf("文字列を入力してください: ");
    fscanf(stdin, "%s", s);

    put_stringr(s);
    putchar('\n');

    return 0;
}