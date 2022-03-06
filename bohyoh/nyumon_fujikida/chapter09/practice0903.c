#include <stdio.h>

#define NUMBER 1000

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
    char s[NUMBER][128];
    for (i = 0; i < NUMBER; i++) {
        printf("s[%d] : ", i);
        scanf("%s", s[i]);
        if (is_terminator(s[i])) break;
    }

    for (i = 0; i < NUMBER; i++) {
        if (is_terminator(s[i])) break;
        printf("s[%d] = %s\n", i, s[i]);
    }

    return 0;
}

