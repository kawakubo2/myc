#include <stdio.h>

char *str_chr(const char *s, int c)
{
    char *result = s;
    while(*result) {
        if (*result == c) {
            return result;
        }
        result++;
    }
    return NULL;
}

int main(void)
{
    char c;
    char *result;
    char str[] = "abcdefghijklmn";
    printf("1文字入力してください : ");
    c = getchar();

    result = str_chr(str, c);
    if (result != NULL) {
        printf("%cは%pで見つかりました。\n", c, result);
        printf("%p番地は%cです。\n", result, *result);
    } else {
        printf("%cは見つかりませんでした。\n", c);
    }

    return 0;
}
