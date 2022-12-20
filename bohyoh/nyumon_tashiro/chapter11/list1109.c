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
    while (n) {
        if (!(*s1++ = *s2++)) break;
        n--;
    }
    while (n--)
        *s1++ = '\0';
    return tmp;
}

int main(void)
{
    char a1[] = "abcdefgh";
    char a2[] = "abcdefgh";
    char a3[] = "abcdefgh";
    char a4[] = "abcdefgh";
    char b[] = "0123456789";
    char c[] = "012";
    char d[] = "0123456789";
    char e[] = "012";

    char *r1 = strcpy(a1, b);
    printf("%s\n", r1);
    char *r2 = strcpy(a2, c);
    printf("%s\n", r2);
    char *r3 = strncpy(a3, d, 5);
    printf("%s\n", r3);
    char *r4 = strncpy(a4, e, 5);
    printf("%s\n", r2);

    return 0;
}