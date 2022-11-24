#ifndef PUT_CHARS_H
#define PUT_CHARS_H
#include <stdio.h>
void put_chars(int ch, int n)
{
    while(n-- > 0)
        putchar(ch);
}
void put_stars(int n)
{
    while(n-- > 0)
        putchar('*'); 
}
#endif