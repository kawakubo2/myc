#include <stdio.h>

char *strcat(char *s1, const char *s2)
{
    char *temp = s1;
    while (*s1)
        s1++;
    while (*s1++ = *s2++)
        ;
    return temp;
}

char *strncat(char *s1, const char *s2, size_t n)
{
    char *temp = s1;
    while (*s1)
        s1++;
    while (n--) {
        if (!(*s1++ = *s2++)) break;
    }
    *s1 = '\0';

    return temp;
}

int main(void)
{
    char str1[128];
    char str2[128];
    char str3[123];
    int n;
    printf("文字列1: ");
    scanf("%s", str1);
    printf("文字列2: ");
    scanf("%s", str2);

    strcat(str1, str2);
    printf("文字列1=\"%s\"\n", str1);

    printf("文字列3: ");
    scanf("%s", str3);
    printf("コピーする文字数: ");
    scanf("%d", &n);

    strncat(str3, str2, n);
    printf("文字列3=\"%s\"\n", str3);

    return 0;
}