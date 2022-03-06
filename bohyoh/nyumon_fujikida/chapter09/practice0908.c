#include <stdio.h>

int str_len(const char s[])
{
    int len = 0;
    while(s[len]) len++;
    return len;
}

void put_stringr(const char s[])
{
    int i;
    int len = str_len(s);
    for (i = len - 1; i >= 0; i--) {
        putchar(s[i]);
    }
    putchar('\n');
}

int main(void)
{
    char s[] = "abcdef";
    put_stringr(s);

    return 0;
}

