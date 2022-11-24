#include <stdio.h>

int str_length(const char s[])
{
    int len = 0;
    while(s[len]) len++;
    return len;
}

void rev_string(char s[])
{
    int i;
    int size = str_length(s);
    for (int i = 0; i < size / 2; i++) {
        char temp = s[i];
        s[i] = s[size - 1 - i];
        s[size - 1 - i] = temp;
    }
}

int main(void)
{
    char s[][128] = { "C", "C++", "JavaScript", "Python" };
    for (int i = 0; i < 4; i++) {
        rev_string(s[i]);
        printf("%s\n", s[i]);
    }
    return 0;
}