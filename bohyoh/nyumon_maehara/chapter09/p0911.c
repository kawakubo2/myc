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

int main(void)
{
    char str[ROW_NUM][COL_NUM];
    for (int i = 0; i < ROW_NUM; i++) {
        printf("s[%d]: ", i);
        fscanf(stdin, "%s", str[i]);
        if (strcmp(str[i], "$$$$$") == 0) {
            break;
        }
    }
    puts("-----------------------------");
    print_strary(str);

    return 0;
}