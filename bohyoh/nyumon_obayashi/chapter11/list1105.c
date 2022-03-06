#include <stdio.h>
#include "chapter11.h"

int main(void)
{
    char str[128];
    printf("文字列を入力してください : ");
    scanf("%s", str);

    printf("文字列\"%s\"の長さは%dです。\n", str, str_length(str));

    return 0;
}

