#include <stdio.h>

void put_string(const char *s)
{
    while(*s) {
        putchar(*s++);
    }
}

int main(void)
{
    char str[128];
    printf("文字列: ");
    fscanf(stdin, "%s", str);
    put_string(str);
    printf("\n");

    return 0;
}