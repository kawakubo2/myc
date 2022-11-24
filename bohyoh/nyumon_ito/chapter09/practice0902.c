#include <stdio.h>

int main(void)
{
    char str[] = "ABC";
    str[0] = '\0';
    printf("%s\n", str);

    return 0;
}