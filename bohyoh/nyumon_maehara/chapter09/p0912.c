#include <stdio.h>
#include <string.h>

#define ROW_NUM 100
#define COL_NUM 128

int str_length(const char s[])
{
    int len = 0;
    while (s[len]) {
        len++;
    }
    return len;
}


void rev_strings(char s[ROW_NUM][COL_NUM])
{
    int len;
    for (int i = 0; i < ROW_NUM; i++) {
        if (strcmp(s[i], "$$$$$") == 0) {
            break;
        }
        len = str_length(s[i]);
        for (int j = 0; j < len / 2; j++) {
            char temp = s[i][j];
            s[i][j] = s[i][len - 1 - j];
            s[i][len - 1 - j] = temp;
        }
    }
}

void print_strary(const char s[ROW_NUM][COL_NUM])
{
    for (int i = 0; i < COL_NUM; i++) {
        if (strcmp(s[i], "$$$$$") == 0) {
            break;
        }
        printf("s[%d] = \"%s\"\n", i, s[i]);
    }
}

void put_strary(char s[ROW_NUM][COL_NUM])
{
    for (int i = 0; i < ROW_NUM; i++) {
        printf("s[%d]: ", i);
        fscanf(stdin, "%s", s[i]);
        if (strcmp(s[i], "$$$$$") == 0) {
            break;
        }
    }
}

int main(void)
{
    char str[ROW_NUM][COL_NUM];
    put_strary(str);
    rev_strings(str);
    puts("-----------------------------");
    print_strary(str);

    return 0;
}