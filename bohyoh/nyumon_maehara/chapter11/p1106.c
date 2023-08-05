#include <stdio.h>

int mystrcmp(const char *s1, const char *s2)
{
    while (1) {
        if (*s1 == '\0' && *s2 == '\0') return 0;
        if (*s1 != *s2) return *s1 - *s2;
        s1++;
        s2++;
    }
}

int main(void)
{
    char s1[128];
    char s2[128];
    int ret;
    puts("2つの文字列を比較します。");
    printf("文字列A: ");
    fscanf(stdin, "%s", s1);
    printf("文字列B: ");
    fscanf(stdin, "%s", s2);

    ret = mystrcmp(s1, s2);
    printf("戻り値: %d\n", ret);
    if (ret == 0) {
        puts("文字列Aと文字列Bは等しいです。");
    } else if (ret < 0) {
        puts("文字列Bは文字列Aよりも大きいです。");
    } else {
        puts("文字列Aは文字列Bよりも大きいです。");
    }

    return 0;
}