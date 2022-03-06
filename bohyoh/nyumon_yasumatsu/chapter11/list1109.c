#include <stdio.h>

char *strcpy(char *s1, const char *s2)
{
    char *tmp = s1;
    while(*s1++ = *s2++)
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
    while(n--) {
        *s1++ = '\0';
    }
    return tmp;
}

int main(void)
{
    puts("---< strcpy(str1, str2) >---");
    int n;
    char str1[128], str2[128], *result;
    char str3[128], str4[128];
    printf("文字列(str2)を入力してください : ");
    scanf("%s", str2);

    result = strcpy(str1, str2);
    printf("str1 = \"%s\"\n", str1);
    printf("戻り値 = \"%s\"\n", result);

    puts("\n---< strncpy(str3, str4, n) >---");
    printf("文字列(str4)を入力してください : ");
    scanf("%s", str4);
    printf("コピーする文字数を入力してください : ");
    scanf("%d", &n);
    result = strncpy(str3, str4, n);
    printf("str3 = \"%s\"\n", str3);
    printf("戻り値 = \"%s\"\n", result);

    return 0;
}

