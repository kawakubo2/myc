#include <stdio.h>

char *strcat(char *s1, const char *s2)
{
    char *tmp = s1;

    while (*s1) {
        s1++;
    }
    while (*s1++ = *s2++)
        ;
    return tmp;
}

char *strncat(char *s1, const char *s2, size_t n)
{
    char *tmp = s1;

    while(*s1) {
        s1++;
    }
    while (n--) {
        if (!(*s1++ = *s2++)) break;
    }
    *s1 = '\0';

    return tmp;
}

int main(void)
{
    char s1[128];
    char s2[128];
    printf("文字列1: "); fscanf(stdin, "%s", s1);
    printf("文字列2: "); fscanf(stdin, "%s", s2);

    char *r1= strcat(s1, s2);

    printf("%s\n", r1);

    return 0;
}