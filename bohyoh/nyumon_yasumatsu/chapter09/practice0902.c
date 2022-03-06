#include <stdio.h>

int main(void)
{
    int i, length;

    char s[] = "ABC";
    s[0] = '\0';

    printf("s=\"%s\"\n", s);

    length = sizeof(s) / sizeof(s[0]);

    for (i = 0; i < length; i++) {
        printf("%c ", s[i]);
    }
    putchar('\n');

    printf("size=%u\n", (unsigned)sizeof(s));

    return 0;
}
