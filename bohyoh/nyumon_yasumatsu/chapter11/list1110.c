#include <stdio.h>

char *strcat(char *s1, const char *s2)
{
    char *tmp = s1;
    while (*s1) s1++;
    while (*s1++ = *s2++);
    return tmp;
}

char *strncpy(char *s1, const char *s2, size_t n)
{
    char *tmp = s1;
    while (*s1) s1++;
    while (n--)
        if (!(*s1++ = *s2++)) break;
    *s1 = '\0';
    return tmp;
}

int main(void)
{
    char s1[] = "abcdef";
    char s2[] = "123456789";
    char s3[] = "abcdef";
    char s4[] = "123456789";

    printf("s1=%s\n", s1);
    printf("s2=%s\n", s2);
    printf("strcat(s1, s2) ---> %s\n", strcat(s1, s2));

    printf("s3=%s\n", s3);
    printf("s4=%s\n", s4);
    printf("strncat(s3, s4, 3) ---> %s\n",strncpy(s3, s4, 3));

    return 0;
}

