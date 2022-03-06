#include <stdio.h>

void put_stringn(const char s[], int n)
{
    int i, cnt;
    for (cnt = 0; cnt < n; cnt++) {
        i = 0;
        while(s[i])
            putchar(s[i++]);
    }
    putchar('\n');
}

int main(void)
{
    int n;
    char str[128];
    printf("文字列を入力してください : ");
    scanf("%s", str);
    printf("繰り返す回数を入力してください : ");
    scanf("%d", &n);

    put_stringn(str, n);

    return 0;
}


