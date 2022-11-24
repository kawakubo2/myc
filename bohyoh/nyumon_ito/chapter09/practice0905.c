#include <stdio.h>

int str_char(const char s[], int c)
{
    int index = 0;
    while (s[index]) {
        if (s[index] == c) {
            return index;
        }
        index++;
    }
    return -1;
}

int main(void)
{
    int pos;
    int search;
    char str[128];
    printf("文字列: ");
    scanf("%s", str);
    pos = str_char(str, 'a');
    if (pos > -1) {
        printf("aは%sの%d番目にあります。\n", str, pos);
    } else {
        printf("aは%sには存在しません。\n", str);
    }
    return 0;
}