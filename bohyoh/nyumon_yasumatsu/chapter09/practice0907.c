#include <stdio.h>

void put_stringn(const char s[], int n)
{
    int i, j;
    for (i = 0; i < n; i++) {
        j = 0;
        while(s[j])
            putchar(s[j++]);
    }
    putchar('\n');
}

int main(void)
{
    int count;
    char s[128];

    puts("入力した文字列を、指定回数繰り返し表示します。");

    printf("文字列を入力してください:");
    scanf("%s", s);

    printf("繰り返す回数を入力してください:");
    scanf("%d", &count);

    put_stringn(s, count);

    return 0;
}
