#include <stdio.h>

char *str_chr(const char *s, int c)
{
    while(*s) {
        if (*s == c) {
            return s;
        }
        s++;
    }
    return NULL;
}

int main(void)
{
    char str[128];
    char c;
    char *answer;
    printf("文字列を入力してください : ");
    scanf("%s", str);
    printf("文字列\"%s\"の先頭のポインタは %p です。\n", str, &str[0]);
    printf("検索する文字を入力してください : ");
    getchar();
    c = getchar();

    answer = str_chr(str, c);
    if (answer) {
        printf("%cのポインタは %p です。\n", c, answer);
        // printf("%s\n", answer);
    } else {
        printf("\"%s\"の中に%cは存在しません。\n", str, c);
    }

    return 0;
}

