#include <stdio.h>

int strcmp(const char *s1, const char *s2)
{
    while (*s1 == *s2) {
        if (*s1 == '\0') {
            return 0;
        }
        s1++;
        s2++;
    }
    return (unsigned char)*s1 - (unsigned char)*s2;
}

int strncmp(const char *s1, const char *s2, size_t n)
{
    while (n && *s1 && *s2) {
        if (*s1 != *s2)
            return (unsigned char)*s1 - (unsigned char)*s2;
        s1++;
        s2++;
        n--;
    }

    if (!n) return 0;
    if (*s1) return 1;

    return -1;
}

int main(void)
{
    char str1[128];
    char str2[128];
    printf("文字列1: ");
    scanf("%s", str1);
    printf("文字列2: ");
    scanf("%s", str2);

    puts("2つの文字列の大小比較をします。");
    if (strcmp(str1, str2) == 0) {
        printf("%sと%sは等しい。\n", str1, str2);
    } else if (strcmp(str1, str2) > 0) {
        printf("%sは%sより大きい。\n", str1, str2);
    } else {
        printf("%sは%sより大きい。\n", str2, str1);
    }

    puts("2つの文字列の3文字目までの大小を比較します。");
    if (strncmp(str1, str2, 3) == 0) {
        printf("%sと%sは等しい。\n", str1, str2);
    } else if (strncmp(str1, str2, 3) > 0) {
        printf("%sは%sより大きい。\n", str1, str2);
    } else {
        printf("%sは%sより大きい。\n", str2, str1);
    }
}