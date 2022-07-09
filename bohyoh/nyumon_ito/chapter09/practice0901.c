#include <stdio.h>

int main(void)
{
    char str[] = "ABC\0DEF";
    printf("%s\n", str);
    printf("サイズ: %ld\n", sizeof(str));

    return 0;
}