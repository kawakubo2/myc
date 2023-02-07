#include <stdio.h>

int main(void)
{
    for (char c = 'A'; c <= 'Z'; c++) {
        printf("%c の文字コードは %d です。\n", c, (int)c);
    }
    return 0;
}