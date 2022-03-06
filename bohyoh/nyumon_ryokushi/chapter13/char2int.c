#include <stdio.h>

int main(void)
{
    int i;
    char str[] = "jklaegkeageahkeei";

    i = 0;
    while (str[i]) {
        printf("char[%c]: codePoint = %d\n", str[i], str[i]);
        i++;
    }
    return 0;
}


