#include <stdio.h>

int main(void)
{
    char i;
    for (char c = 'A'; c <= 'Z'; c++) {
        printf("%c = %d\n", c, (int)c);
    }
    /*
    for (char c = 'ァ'; c <= 'ン'; c++) {
        printf("%c = %d\n", c, (int)c);
    }
    */
    return 0;
}