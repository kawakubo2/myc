#include <stdio.h>

void put_stringn(const char s[], int n)
{
    int i, j;
    for (i = 0; i < n; i++) {
        j = 0;
        while(s[j])
            putchar(s[j++]);
    }
}

int main(void)
{
    char str[128];
    int n;
    printf("文字列を入力してください: ");
    scanf("%s", str);
    printf("繰り返し回数を入力してください: ");
    scanf("%d", &n);
    put_stringn(str, n);
    putchar('\n');
    return 0;
}