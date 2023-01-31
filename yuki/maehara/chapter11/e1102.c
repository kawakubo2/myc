#include <stdio.h>

char *scan_char(char *p, char c);
int main(void);

int main(void)
{
    char str[255];
    char target;
    printf("検索文字: ");
    target = getchar();
    printf("文字列: ");
    fscanf(stdin, "%s", str);
    char *pt = scan_char(str, target);
    if (pt != NULL) {
        printf("%cは%sに存在し、アドレスは%pです。\n", target, str, pt);
        printf("%c\n", *pt);
    } else {
        printf("%cは%sには存在しません。\n", target, str);
    }
    return 0;
}

char *scan_char(char *p, char c)
{
    char *result = p;
    while (*p) {
        if (*p == c) {
            return p;
        }
        p++;
    }
    return NULL;
}

void get_line(char *buffer, int size)
{
    if (fgets(buffer, size, stdin) == NULL) {
        buffer[0] = '\0';
        return;
    }

    for (int i = 0; i < size; i++) {
        if (buffer[i] == '\n') {
            buffer[i] = '\0';
            return;
        }
    }
}