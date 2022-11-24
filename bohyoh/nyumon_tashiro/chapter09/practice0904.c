#include <stdio.h>

int str_length(const char s[])
{
    int len = 0;
    while(s[len])
        len++;
    return len;
}

void null_string(char s[])
{
    s[0] = '\0';
}

int main(void)
{
    int i;
    char s[][10] = {
        "ABC", "X", "12345"
    };
    for (i = 0; i < 3; i++) {
        printf("[%s]\n", s[i]);
        null_string(s[i]);
        printf("[%s] size=%d\n", s[i], str_length(s[i]));
    }

    return 0;
}