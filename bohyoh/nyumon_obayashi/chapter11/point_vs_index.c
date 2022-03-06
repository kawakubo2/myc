#include <stdio.h>

int str_length1(const char *s)
{
    int len = 0;
    printf("s = %p\n", s);
    while(*s++)
        printf("s = %p\n", s);
        len++;
    return len;
}

int str_length2(const char *s)
{
    int i = 0, len = 0;
    printf("s = %p\n", s);
    while(s[i++]) {
        printf("s = %p\n", s);
        len++;
    }
    return len;
}

int main(void)
{
    char str[] = "abcde";

    printf("\"%s\"の長さは%dです。\n", str, str_length1(str));
    printf("\"%s\"の長さは%dです。\n", str, str_length2(str));

    return 0;
}

