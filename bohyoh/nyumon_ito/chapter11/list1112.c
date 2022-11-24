#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[128];
    printf("文字列を入力してください: ");
    scanf("%s", str);

    int n = atoi(str);
    printf("整数に変換すると%dです。\n", n);
    printf("100倍すると%dとなります。\n", n * 100);

    return 0;
}