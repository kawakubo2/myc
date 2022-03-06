#include <stdio.h>

int main(void)
{
    char c0 = '0';
    char c7 = '7';
    char c2 = '2';
    int n7 = c7 - c0;
    int n2 = c2 - c0;
    printf("%d\n", n7 - n2);

    return 0;
}

