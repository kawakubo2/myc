#include <stdio.h>

void put_stringn(const char s[], int n)
{
    while(n--) {
        printf("%s", s);
    }
}
int main(void)
{
    char s[128];
    int num;
    puts("入力した文字を指定した回数表示します。");
    printf("文字列: "); fscanf(stdin, "%s", s);
    printf("回数: "); fscanf(stdin, "%d", &num);

    put_stringn(s, num);
    putchar('\n');

    return 0;
}