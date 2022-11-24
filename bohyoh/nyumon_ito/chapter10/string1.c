#include <stdio.h>

void print_string(const char s[]) {
    printf("%s\n", s);
}

int main(void)
{
    char str[128] = "Hello,World!";
    print_string(str);

    return 0;
}