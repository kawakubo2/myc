#include <stdio.h>

int str_length(const char s[])
{
    int i = 0;
    while(s[i]) {
        i++;
    }
    return i;
}
void rev_string(char s[])
{
    int len = str_length(s);
    for (int i = 0; i < len / 2; i++) {
        char temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }
}
int main(void)
{
    char s[128];
    int len;
    printf("文字列を入力してください: ");
    fscanf(stdin, "%s", s);

    rev_string(s);
    printf("%s\n", s);

    return 0;
}