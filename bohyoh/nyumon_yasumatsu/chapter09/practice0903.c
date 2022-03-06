#include <stdio.h>

#define NUMBER 1000

int is_stop_str(const char s[128]) {
    int i;
    for (i = 0; i < 5; i++) {
        char c = s[i];
        if (c != '$') {
            return 0;
        }
    }
    if (s[i] == '\0')
        return 1;
    else
        return 0;
}

int main(void)
{
    int i, j;
    char s[NUMBER][128];

    for (i = 0; i < NUMBER; i++) {
        printf("s[%d] : ", i);
        scanf("%s", s[i]);
        if (is_stop_str(s[i])) break;
    }

    for (i = 0; i < NUMBER; i++) {
        if (is_stop_str(s[i])) break;
        printf("%s\n", s[i]);
    }

    return 0;
}
