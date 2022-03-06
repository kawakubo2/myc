#include <stdio.h>

#define NB_STRING 1000
#define NB_CHARS  128

int is_terminal(char *s) {
    int cnt = 0;
    while(*s) {
        if (*s == '$') 
            cnt++;
        else
            break;
        s++;
    }
    return cnt == 5 ? 1: 0;
}

int main(void)
{
    int i;
    char s[NB_STRING][NB_CHARS];

    for (i = 0; i < NB_STRING; i++) {
        printf("s[%d] : ", i);
        scanf("%s", s[i]);
        if (is_terminal(s[i])) {
            break;
        }
    }

    for (i = 0; i < NB_STRING; i++) {
        if (is_terminal(s[i])) break;
        printf("s[%d] = \"%s\"\n", i, s[i]);
    }

    return 0;
}

