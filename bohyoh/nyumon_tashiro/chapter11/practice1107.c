#include <stdio.h>
#include <ctype.h>

char *str_toupper(char *s)
{
    char *temp = s;
    while (*s) {
        *s = toupper(*s);
        s++;
    }
    return temp;
}

char *str_tolower(char *s)
{
    char *temp = s;
    while (*s) {
        *s = tolower(*s);
        s++;
    }
    return temp;
}
int main(void)
{
    char str[128];
    printf("文字列: ");
    fscanf(stdin, "%s", str);
    printf("toupper: %s\n", str_toupper(str));
    printf("tolower: %s\n", str_tolower(str));

    return 0;
}