#include <stdio.h>

int search_null(char s[128])
{
    int i = 0;
    while (s[i]) {
        i++;
    }
    return i;
}

void rev_str(char s[128]) 
{
    int i = 0;
    int null_pos = search_null(s); 
    for (i = 0; i < null_pos / 2; i++) {
        char temp = s[i];
        s[i] = s[null_pos - 1 - i];
        s[null_pos - 1 - i] = temp;
    }
}

void rev_strings(char s[][128], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        rev_str(s[i]);
    }
}

int main(void)
{
    int i;
    char s[][128] = {"Python", "Java", "C#", "Hello, World!"};
    rev_strings(s, 4);
    for (i = 0; i < 4; i++) {
        printf("s[%d]=%s\n", i, s[i]);
    }
    return 0;
}