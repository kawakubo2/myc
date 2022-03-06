#include <stdio.h>

char *str_copy(char *d, const char *s)
{
    char *t = d;
    while (*d++ = *s++)
        ;
    printf("dのアドレスは%p\n", d);
    return t;
}

int main(void)
{
    char str[128] = "ABC";
    printf("strのアドレスは%p\n", str);
    char tmp[128];

    printf("str = \"%s\"\n", str);

    printf("コピーするのは : ");
    scanf("%s", tmp);

    // str_copy(str, tmp);

    puts("コピーしました。");
    printf("str = \"%s\"\n", str_copy(str, tmp));
    printf("str_copy後のstrのアドレスは%p\n", str);

    return 0;
}

