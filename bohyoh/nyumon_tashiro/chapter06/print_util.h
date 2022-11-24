#ifndef PRINT_UTIL_H
#define PRINT_UTIL_H

#include <stdio.h>
void put_chars(int ch, int n)
{
    while (n-- > 0)
        putchar(ch);
}
#endif