#include <stdio.h>

void print_char(int n, char c)
{
    for (int i = 0; i < n; i++) {
        putchar(c);
    }
    printf("\n");
}

int main(void)
{
    for (int i = -8; i <= 8; i++) {
        print_char(i * i, '*');
    }
    printf("\n");
}