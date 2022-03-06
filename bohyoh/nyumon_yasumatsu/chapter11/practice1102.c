#include <stdio.h>

int main(void)
{
    int i, size_a, size_p;
    char a[][5] = { "LISP", "C", "Ada" };
    char *p[] = { "PAUL", "X", "MAC" };

    printf("sizeof(a) = %u\n", (unsigned)(sizeof(a)));
    printf("sizeof(a[0]) = %u\n", (unsigned)(sizeof(a[0])));
    size_a = sizeof(a) / sizeof(a[0]);

    for (i = 0; i < size_a; i++)
        printf("a[%d] = \"%s\"\n", i, a[i]);
    
    printf("sizeof(p) = %u\n", (unsigned)(sizeof(p)));
    printf("sizeof(p[0]) = %u\n", (unsigned)(sizeof(p[0])));
    size_p = sizeof(p) / sizeof(p[0]);

    for (i = 0; i < size_p; i++)
        printf("p[%d] = \"%s\"\n", i, p[i]);

    return 0;
}

