#include <stdio.h>

void put_string(const char *s)
{
    while (*s) {
        putchar(*s++);
    }
    putchar('\n');
}
int main(void)
{
    char str[123];
    printf("文字列を入力してください: ");
    scanf("%s", str);

    put_string(str);

    return 0;
}