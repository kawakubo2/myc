#include <stdio.h>

void put_strary(const char s[][6], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        printf("s[%d] = \"%s\"\n", i, s[i]);
    }
}

int main(void)
{
    char cs[][6] = {"Turbo", "NA", "DOHC"};
    puts("-------------------");
    put_strary(cs, sizeof(cs) / sizeof(cs[0]));

    char ls[][6] = {"C", "C++", "Java", "C#", "D", "Rust", "Scala", "Go", "Ruby"};
    puts("-------------------");
    put_strary(ls, sizeof(ls) / sizeof(ls[0]));

    return 0;
}

