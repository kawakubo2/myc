#include <stdio.h>

void put_stringn(const char s[], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        j = 0;
        while(s[j]) 
            putchar(s[j++]);
    }
    printf("\n");
}

int main(void)
{
    char str[][128] = { "Python", "C", "Java"};
    for (int i = 0; i < 3; i++) {
        put_stringn(str[i], 5);
    }
    return 0;
}