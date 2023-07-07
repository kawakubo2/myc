#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100][128];
    for (int i = 0; i < 100; i++) {
        printf("s[%d]: ", i);
        fscanf(stdin, "%s", s[i]);
        if (strcmp(s[i], "$$$$$") == 0) {
            break;
        }
    }
    puts("-------------------------------");
    for (int i = 0; i < 100; i++) {
        if (strcmp(s[i], "$$$$$") == 0) break;
        printf("s[%d] = \"%s\"\n", i, s[i]);
    }
    return 0;
}