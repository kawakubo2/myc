#include <stdio.h>

int strncmp(const char *s1, const char *s2, size_t n)
{
    while (n && *s1 && *s2) {
        if (*s1 != *s2)
            return (unsigned char)*s1 - (unsigned char)*s2;
        s1++;
        s2++;
        n--;
    }
    if (!n)  return 0;
    if (*s1 == '\0' && *s2 == '\0') return 0;
    if (*s1) return 1;
    return -1;
}

int main(void)
{
    char str1[128];
    char str2[128];
    int size;
    puts("2つの文字列の最初の指定した文字数分比較します。");
    
    printf("文字列1: "); scanf("%s", str1);
    printf("文字列2: "); scanf("%s", str2);
    printf("文字数: "); scanf("%d", &size);

    if (strncmp(str1, str2, size) > 0) {
        printf("%sは%sより大きい。\n", str1, str2);
    } else if (strncmp(str1, str2, size) < 0) {
        printf("%sは%sより小さい。\n", str1, str2);
    } else {
        printf("%sは%sと等しい。\n", str1, str2);
    }

    return  0;
}

