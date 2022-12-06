#include <stdio.h>

int main(void)
{
    int i;
    char a[][5] = {"LISP", "C", "Ada"};
    char *p[] = {"PAUL", "X", "MAC"};
    printf("sizeof(p) = %lu\n", sizeof(p));
    for (i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        printf("a[%d] = \"%s\"\n", i, a[i]);
    }
    for (i = 0; i < sizeof(p) / sizeof(p[0]); i++) {
        printf("p[%d] = \"%s\"\n", i, p[i]);
    }
    return 0;
}