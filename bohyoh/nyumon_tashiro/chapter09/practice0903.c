#include <stdio.h>

#define ROW_NUM 100
#define COL_NUM 128
int str_len(const char str[COL_NUM])
{
    int i;
    for (i = 0; i < COL_NUM; i++) {
        if (str[i] == '\0') break;
    }
    return i;
}
int is_terminal(const char str[COL_NUM])
{
    int i;
    for (i = 0; i < 5; i++) {
        if (str[i] != '$') break;
    }
    return i == 5 && str[5] == '\0';
}

int main(void)
{
    int i = 0;
    /*
    char s[ROW_NUM][COL_NUM] = {
        "C",
        "JavaScript",
        "Python",
        "Java",
        "C++",
        "$$$$",
        "C#",
        "$$$$$$",
        "Go",
        "TypeScript",
        "$$$$$",
        "NGNGNG",
        "NG"
    };
    */
    char s[ROW_NUM][COL_NUM];
    for (i = 0; i < ROW_NUM; i++) {
        fscanf(stdin, "%s", s[i]);
        printf("s[%d]=%s str_len=%d\n", i, s[i], str_len(s[i]));
        if (is_terminal(s[i])) break;
    }


    for (i = 0; i < ROW_NUM && !is_terminal(s[i]); i++) {
        printf("%s\n", s[i]);
    }
}