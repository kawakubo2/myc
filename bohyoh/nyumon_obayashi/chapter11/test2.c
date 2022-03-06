#include <stdio.h>
#include <string.h>

void str_sort(char *s[], int size)
{
    int i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = size - 1; j > i; j--) {
            if (strcmp(s[j - 1], s[j]) > 0) {
                char *tmp = s[j];
                s[j] = s[j - 1];
                s[j - 1] = tmp;
            }
        }
    }
}

int main(void)
{
    int i;
    char *str[] = { "ccc", "cc", "a", "ab", "A", "b", "aa" };
    puts("--- ソート前 ---");
    for (i = 0; i < 7; i++) {
        printf("%s ", str[i]);
    }
    putchar('\n');
    str_sort(str, 7);
    puts("--- ソート後 ---");
    for (i = 0; i < 7; i++) {
        printf("%s ", str[i]);
    }
    putchar('\n');

    return 0;
}

