#include <stdio.h>

int main(void)
{
    int ch;
    char count = 32;
    while(1) {
        printf("%c", (char)count);
        if (count == 127) break;
        count++;
    }
    putchar('\n');

    return 0;
}

