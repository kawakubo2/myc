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
        if (*s1 != *s2) {
            return (unsigned char)*s1 - (unsigned char)*s2;
        }
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
    char s1[128];
    char s2[128];
    printf("文字列s1: ");
    fscanf(stdin, "%s", s1);
    printf("文字列s2: ");
    fscanf(stdin, "%s", s2);
    printf("---< strcmpテスト >---");
    printf("strcmp(s1, s2): %d\n", strcmp(s1, s2));
    printf("---< strncmp(3文字目まで比較)テスト ---");
    printf("strncmp(s1, s2, 3): %d\n", strncmp(s1, s2, 3));
    
    return 0;
}