#include <stdio.h>

int search_null(const char s[])
{
    int i = 0;
    while (s[i]) {
        if (s[i] == '\0') break;
        i++;
    }
    return i;   
}

void rev_string(char s[])
{
    int i;
    int pos = search_null(s);
    for (i = 0; i < pos / 2; i++) {
        char temp = s[i];
        s[i] = s[pos - 1 - i];
        s[pos - 1 - i] = temp;
    }
}

int main(void)
{
    char str[128];
    printf("文字列を入力してください: ");
    scanf("%s", str);
    rev_string(str);
    printf("反転させた文字列: %s\n", str);

    return 0;
}