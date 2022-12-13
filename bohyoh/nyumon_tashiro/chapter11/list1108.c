#include <stdio.h>

size_t strlen(const char *s)
{
    size_t len = 0;
    while(*s++) {
        len++;
    }
    return len;
}

int main(void)
{
    char str[128];
    printf("文字列: ");
    fscanf(stdin, "%s", str);
    printf("len=%lu\n", strlen(str));

    return 0;
}