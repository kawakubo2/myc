#include <stdio.h>
#include "mystdio.h"
// This is Japan.
int count_upper(char *string, int *length)
{
    int upper = 0;
    while (*string) {
        if (*string >= 'A' && *string <= 'Z') {
            upper++;
        } 
        string++;
        (*length)++;
    }
    return upper;
}

int main(void)
{
    char str[256];
    int len = 0;
    get_line(str, 256);

    int upper = count_upper(str, &len);

    printf("len = %d\n", len);
    printf("upper = %d\n", upper);

    return 0;
}