#include <stdio.h>
#include "chapter09.h"

void rev_mulstring(char s[][128], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        rev_string(s[i], 128);
    }
}

void put_strary(const char s[][128], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        printf("\"%s\"\n", s[i]);
    }
}

int main(void)
{
    int i;
    char str1[][128] = { "Java", "Python", "PHP" };
    char str2[][128] = { "Go", "Rust", "Julia", "Kotlin", "Swift" };

    rev_mulstring(str1, 3);
    put_strary(str1, 3);

    rev_mulstring(str2, 5);
    put_strary(str2, 5);



    return 0;
}

