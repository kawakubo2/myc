#include <stdio.h>
#include <string.h>

#define ROW_NUM 100
#define COL_NUM 128
void print_strary(const char s[ROW_NUM][COL_NUM])
{
    for (int i = 0; i < ROW_NUM; i++) {
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
    puts("-----------------------------");
    print_strary(str);

    return 0;
}