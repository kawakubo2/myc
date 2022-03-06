#include <ctype.h>
#include <stdio.h>

void str_toupper(char s[])
{
    while(*s) {
        *s = toupper(*s);
        s++;
    }
}

int main(void)
{
    char str[] = "AbcdEfg";
    printf("変換前:%s\n", str);
    str_toupper(str);
    printf("変換後:%s\n", str);

    return 0;
}

