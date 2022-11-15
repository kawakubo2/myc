#include <stdio.h>

int str_len(char s[])
{
    int len = 0;
    while(s[len]) {
        len++;
    }
    return len;
}

void rev_string(char s[])
{
    int i, size = str_len(s);
    for (i = 0; i < size / 2; i++) {
        char tmp = s[i];
        s[i] = s[size - 1 - i];
        s[size - 1 - i] = tmp;
    }
}
void rev_strings(char s[][128], int n)
{
    for (int i = 0; i < n; i++) {
        rev_string(s[i]);
    }
}

int main(void)
{
    char str[][128] = { "Java", "Python", "PHP", "Perl", "JavaScript", "C#" };
    rev_strings(str, 6);
    for (int i = 0; i < 6; i++) {
        printf("%s\n", str[i]);
    }
    return 0;
}