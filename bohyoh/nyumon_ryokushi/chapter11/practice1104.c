#include <stdio.h>

void put_string(const char *s)
{
    while(*s)
        putchar(*s++);
    putchar('\n');
}

int main(void)
{
    char str[128] = "abcdefg";

    put_string(str);

    return 0;
}

