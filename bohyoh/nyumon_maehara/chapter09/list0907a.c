#include <stdio.h>

int main(void)
{
    char s[3][128];
    printf("文字列: ");
    fscanf(stdin, "%s%s%s", s[0], s[1], s[2]);
    puts("-------------------------------");
    for (int i = 0; i < 3; i++) {
        printf("s[%d] = \"%s\"\n", i, s[i]);
    }
    return 0;
}