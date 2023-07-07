#include <stdio.h>

int str_char(const char s[], int c)
{
    int i = 0;
    while(s[i]) {
        if (s[i] == c) {
            return i;
        }
        i++;
    }
    return -1;
}
int main(void)
{
    int pos;
    char s[128];
    char temp[10];
    char c;
    printf("文字列: ");
    fscanf(stdin, "%s", s);
    printf("検索文字: ");
    fscanf(stdin, "%s", temp);
    c = temp[0];
    printf("--- %c : \n", c);
    pos = str_char(s, c);
    if (pos != -1) {
        printf("%sの%d番目に%cは存在します。\n", s, pos, c);
    } else {
        printf("%sの中に%cは含まれていません。\n", s, c);
    }
    return 0;
}