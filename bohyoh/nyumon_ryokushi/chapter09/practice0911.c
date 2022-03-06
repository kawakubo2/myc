#include <stdio.h>

#define NB_STR 1000
#define NB_CHARS 128

int is_terminator(const char s[])
{
    int i;
    for (i = 0; i < 5; i++) {
        if (s[i] != '$') return 0;
    }
    if (s[i] == '\0') return 1;
    else return 0;
}

int main(void)
{
    int i;
    char str[NB_STR][NB_CHARS];
    for (i = 0; i < NB_STR; i++) {
        printf("s[%d] : ", i);
        scanf("%s", str[i]);
        if (is_terminator(str[i])) break;
    }

    for (i = 0; i < NB_STR; i++) {
        if (is_terminator(str[i])) break;
        printf("s[%d] = %s\n", i, str[i]);
    }

    return 0;
}

