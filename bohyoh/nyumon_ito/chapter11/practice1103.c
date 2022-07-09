#include <stdio.h>

char *str_copy(char *d, const char *s)
{
    char *t = d;
    while (*d++ = *s++)
        ;
    return t;
}

int main(void)
{
    char str[128] = "ABC";
    char tmp[128];
    char *tmp2;

    printf("str = \"%s\"\n", str);

    printf("コピーするのは: ");
    scanf("%s", tmp);

    tmp2 = str_copy(str, tmp);

    puts("コピーしました。");
    printf("str = \"%s\"\n", str);

//    printf("tmp2 = \"%s\"\n", tmp2);
    printf("str_copy=\"%s\"\n", str_copy(str, tmp));
    return 0;
}