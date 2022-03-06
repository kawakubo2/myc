#include <stdio.h>

char *strcpy(char *s1, const char *s2)
{
    char *tmp = s1;
    while (*s1++ = *s2++)
        ;
    return tmp;
}

char *strncpy(char *s1, const char *s2, size_t n)
{
    char *tmp = s1;
    while(n) {
        if (!(*s1++ = *s2++)) break;
        n--;
    }

    while(n--)
        *s1++ = '\0';
}

int main(void)
{
    char a[] = "abcdefghijklmn";
    char b[64] = "abc";
    char c[] = "0123456789";
    char d[] = "abcdefghijklmn";

    printf("%sを%sに5文字コピーする。\n", c, a);
    strncpy(a, c, 5);
    printf("コピー後: %s\n", a);

    printf("%sを%sに5文字コピーする。\n", c, b);
    strncpy(b, c, 5);
    printf("コピー後: %s\n", b);

    printf("%sを%sに12文字コピーする。\n", c, d);
    strncpy(d, c, 12);
    printf("コピー後: %s\n", d);

    return 0;
}

