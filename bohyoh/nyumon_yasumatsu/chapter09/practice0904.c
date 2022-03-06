#include <stdio.h>

void null_string(char s[])
{
    s[0] = '\0';
}

int main(void)
{
    char str[] = "abcded";

    puts("空文字列にする前");
    printf("%s\n", str);

    null_string(str);

    puts("空文字列にした後");
    printf("%s\n", str);
    
    return 0;
}
