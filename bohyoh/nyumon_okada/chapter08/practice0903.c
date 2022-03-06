#include <stdio.h>

#define NUMBER 1000
#define CHAR_LEN 128
#define TERMINATE 5

int is_terminated(char str[])
{
    int i;
    int count = 0;
    for (i = 0; i < TERMINATE; i++) {
        if (str[i] == '$') count++;
        else return 0;
    }
    if (str[TERMINATE] == '\0') return 1;
    else return 0;
}

int main(void)
{
    int i;
    char str[NUMBER][CHAR_LEN];
    for (i = 0; i < NUMBER; i++) {
        scanf("%s", str[i]);
        if (is_terminated(str[i])) break;
    }

    puts("-------------");

    for (i = 0; i < NUMBER; i++) {
        if (is_terminated(str[i])) break;
        printf("%s\n", str[i]);
    }

    return 0;
}

