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
    printf("文字列を入力してください : ");
    scanf("%s", str);

    put_string(str);
    putchar('\n');

    return 0;
}

