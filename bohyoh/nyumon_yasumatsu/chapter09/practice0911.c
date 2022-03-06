#include <stdio.h>

#define STR_CNT 1000
#define CHAR_CNT 128

int is_stop_str(const char s[CHAR_CNT]) {
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

void put_strary(const char s[STR_CNT][CHAR_CNT])
{
    int i;
    for (i = 0; i < STR_CNT; i++) {
        if (is_stop_str(s[i])) break;
        int j = 0;
        while (s[i][j]) {
            putchar(s[i][j++]);
        }
        putchar('\n');
    }
}

int main(void)
{
    int i, j;
    char s[STR_CNT][CHAR_CNT];

    for (i = 0; i < STR_CNT; i++) {
        printf("s[%d] : ", i);
        scanf("%s", s[i]);
        if (is_stop_str(s[i])) break;
    }
    
    put_strary(s);

    return 0;
}
