#include <stdio.h>

int str_len(char s[])
{
    int len = 0;
    while(s[len]) len++;
    return len;
}

void rev_string(char s[])
{
    int i, len;
    len = str_len(s);
    for (i = 0; i < len / 2; i++) {
        int tmp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = tmp;
    }
}

void rev_string_array(char s[][128], int n) 
{
    int i;
    for (i = 0; i < n; i++) {
        rev_string(s[i]);
    }
}

void print_strary(const char s[][128], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        printf("\"%s\" ", s[i]);
    }
    putchar('\n');
}

int main(void)
{
    char s[][128] = { "Java", "Python", "C++", "C#", "Durt", "JavaScript" };
    rev_string_array(s, 6); // { "avaJ", "nohtyP", "++C", "#C", "truD", "tpircSavaJ" };

    print_strary(s, 6);

    return 0;
}

