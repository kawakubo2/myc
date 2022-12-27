#include <stdio.h>
#include <stdlib.h>

int strtoi(const char* nptr)
{
    int result = 0;
    int plus = 1;
    if (*nptr == '-') {
        plus = 0;
        nptr++;
    } else if (*nptr == '+') {
        nptr++;
    }
    while(*nptr) {
        if (*nptr < '0' || *nptr > '9') {
            printf("エラー:整数値に変換できない文字が存在します。\n");
            exit(1);
        }
        result = result * 10 + (*nptr - '0');
        nptr++;
    }
    return plus ? result: -result;
}

int main(void)
{
    char str[32];
    printf("数字文字列: ");
    fscanf(stdin, "%s", str);
    int ans = strtoi(str);
    printf("%d\n", ans);

    return 0;
}