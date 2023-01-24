#include <stdio.h>

int mystrlen(char *str)
{
    int len = 0;
    char *s = str;
    while (*s != '\0') {
        len++;
        s++; // 次の要素へ移動
    }
    return len;
}

int main(void)
{
    char str[256];
    printf("文字列: ");
    fscanf(stdin, "%s", str);

    /*
    strを引数に渡すとき、実際には先頭の要素のポインタが
    渡される。したがって
    mystrlen(str)とmystrlen(&str[0])
    は同じ意味になる。
    */
    int size = mystrlen(&str[0]);
    printf("%sの文字数は%dです。\n", str, size);

    return 0;
}