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

int mystrlen(char str[CHAR_CNT])
{
    int i;
    for (i = 0; i < CHAR_CNT; i++) {
        if (str[i] == '\0') {
            return i;
        }
    }
    return -1;
}

void rev_string(char s[][CHAR_CNT])
{
    int i, j, len;
    for (i = 0; i < STR_CNT; i++) {
        if (is_stop_str(s[i])) return;
        len = mystrlen(s[i]);
        for (j = 0; j < len / 2; j++) {
            char tmp = s[i][len - 1 - j];
            s[i][len - 1 - j] = s[i][j];
            s[i][j] = tmp;
        }
    }
}

int main(void)
{
    int i, j;
    char s[STR_CNT][CHAR_CNT];

    // 文字列の入力
    for (i = 0; i < STR_CNT; i++) {
        printf("s[%d] : ", i);
        scanf("%s", s[i]);
        if (is_stop_str(s[i])) break;
    }
    puts("\n---< 入力した文字列 >---");
    put_strary(s);

    // 文字列の反転
    rev_string(s);

    puts("\n---< 反転した文字列 >---");
    put_strary(s);

    return 0;
}
