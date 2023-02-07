#include <stdio.h>
#include "mystdio.h"

char *scan_char(char *p, char c);
void get_line(char *buffer, int size);
int main(void);

int main(void)
{
    char str[255];
    char target;
    printf("文字列: ");
    get_line(str, 255);
    printf("検索文字: ");
    get_line(str, 255);
    target = str[0];
    char *pt = scan_char(str, target);
    if (pt != NULL) {
        printf("%cは%sに存在し、アドレスは%pです。\n", target, str, pt);
        printf("%c\n", *pt);
    } else {
        printf("%cは%sには存在しません。\n", target, str);
    }
    return 0;
}

char *scan_char(char *p, char c)
{
    while (*p) {
        if (*p == c) {
            return p;
        }
        p++;
    }
    return NULL;
}
