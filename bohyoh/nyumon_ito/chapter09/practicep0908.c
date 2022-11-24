#include <stdio.h>

int search_null(const char s[])
{
    int pos = 0;
    while(1) {
        if (s[pos]) {
            pos++;
        } else {
            break;
        }
    }
    return pos;
}

void put_stringr(const char s[])
{
    int i;
    int pos = search_null(s);
    for (i = pos - 1; i >= 0; i--) {
        putchar(s[i]);
    }
    putchar('\n');
}

int main(void)
{
    char str[128];
    printf("文字列を入力してください: ");
    scanf("%s", str);
    put_stringr(str);

    return 0;
}