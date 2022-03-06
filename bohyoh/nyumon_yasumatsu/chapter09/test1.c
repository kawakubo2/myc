#include <stdio.h>

int main(void)
{
    char ns[] = "";
    printf("\"\" = %zu\n", sizeof(ns));

    char ns2[] = { '\0' };
    printf("{\'\\0\'} = %zu\n", sizeof(ns2));

    return 0;
}

