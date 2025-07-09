#include <stdio.h>

int main()
{
    for (char c = 'A'; c <= 'Z'; c++) {
        printf("%cの文字コードは%d\n", c, (int)c);
    }
    for (char c = 'a'; c <= 'z'; c++) {
        printf("%cの文字コードは%d\n", c, (int)c);
    }

    return 0;
}