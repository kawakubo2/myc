#include <stdio.h>

int str_len(const char s[])
{
    int i = 0, counter = 0;
    while(s[i++]) {
        counter++;
    }
    return counter;
}
void swap_char(char *c1, char *c2)
{
    char temp = *c1;
    *c1 = *c2;
    *c2 = temp;
}

void rev_string(char s[])
{
    int i;
    int num = str_len(s);

    for (i = 0; i < num / 2; i++) {
        swap_char(&s[i], &s[num - 1 - i]);
    }
}

int main(void)
{
    char str[128];
    printf("文字列を入力してください : ");
    scanf("%s", str);

    puts("---< 文字列反転 >---");

    rev_string(str);

    printf("%s\n", str);

    return 0;
}

