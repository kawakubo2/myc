#include <stdio.h>

int str_length(const char s[])
{
    int len = 0;
    while(s[len]) {
        len++;
    }
    return len;
}


void put_stringr(const char s[])
{
    for (int i = str_length(s) - 1; i >= 0; i--) {
        putchar(s[i]);
    }
    putchar('\n');
}

int main(void)
{
    char str[][128] = { "1234567", "AB", "a-b#c%@d", "X"};
    for (int i = 0; i < 4; i++) {
        put_stringr(str[i]);
    }

    return 0;
}