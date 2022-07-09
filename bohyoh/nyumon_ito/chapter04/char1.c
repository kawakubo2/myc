#include <stdio.h>

int main(void)
{
    char c = 'A';
    while (c <= 'Z') {
        printf("%c ---> %d\n", c, (int)c);
        c++;
    }
    putchar('\n');

    return 0;
}