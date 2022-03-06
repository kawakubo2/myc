#include <stdio.h>

int strcmp(const char *s1, const char *s2)
{
    while(*s1 == *s2) {
        if (*s1 == '\0') return 0;
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
void print_result(int result, const char s1[], const char s2[])
{
    if (result > 0)
        printf("\"%s\" > \"%s\"\n", s1, s2);
    else if(result < 0)
        printf("\"%s\" < \"%s\"\n", s1, s2);
    else
        printf("\"%s\" == \"%s\"\n", s1, s2);
}

int main(void)
{
    char s1[] = "abc";
    char s2[] = "abcdefg";
    char s3[] = "ab";
    char s4[] = "abc";
    int result;

    puts("---< strcmpテスト >---");
    result = strcmp(s1, s2);
    print_result(result, s1, s2);        
    result = strcmp(s1, s3);
    print_result(result, s1, s3);
    result = strcmp(s1, s4);
    print_result(result, s1, s4);
    
    puts("---< strncmp(3文字)テスト >---");
    result = strncmp(s1, s3, 3);
    print_result(result, s1, s3); 
    result = strncmp(s1, s2, 3);
    print_result(result, s1, s2); 
    
    
    return 0;
}

