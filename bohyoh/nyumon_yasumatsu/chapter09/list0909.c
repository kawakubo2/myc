#include <stdio.h>

void put_string(const char s[])
{
    int i = 0;
    while(s[i])
        putchar(s[i++]);
}

int main(void)
{
    char str[128];

    printf("文字列を入力してください:");
    scanf("%s", str);

    printf("あなたは「");
    put_string(str);
    printf("」と入力しましたね。\n");

    return 0;
}
