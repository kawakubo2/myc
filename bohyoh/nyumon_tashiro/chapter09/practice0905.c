#include <stdio.h>

int str_char(const char s[], int c)
{
    int index = -1, i = 0;
    while(s[i]) {
        if (s[i] == c) {
            index = i;
            break;
        }
        i++;
    }
    return index;
}

int main(void)
{
    char str[128];
    printf("検索対象文字列: ");
    fgets(str, 128, stdin);
    char target;
    printf("検索文字: ");
    fscanf(stdin, "%c", &target);
    int result;
    if ((result = str_char(str, target)) != -1) {
        printf("\%c\'は%d番目に含まれています。\n", target, result);
    } else {
        printf("\'%c\'は含まれていません。\n", target);
    }
}