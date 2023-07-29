#include <stdio.h>

int main(void)
{
    char a[][5] = {"LISP", "C", "Ada"};
    char *p[] = {"PAUL", "A", "MAC"};

    for (int i = 0; i < (sizeof(a) / sizeof(a[0])); i++) {
        printf("a[%d] = \"%s\"\n", i, a[i]);
    }
    for (int i = 0; i < (sizeof(p) / sizeof(p[0])); i++) {
        printf("p[%d] = \"%s\"\n", i, p[i]);
    }

    return 0;
}