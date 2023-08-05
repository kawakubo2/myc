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
    char *ret;

    printf("コピーするのは: ");
    fscanf(stdin,"%s", tmp) ;

    str_copy(str, tmp);

    printf("str = \"%s\"\n", str);
    printf("ret = \"%s\"\n", str_copy(str, tmp));

    return 0;
}