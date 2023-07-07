#include <stdio.h>

int main(void)
{
    char name[20];
    printf("名前をローマ字で入力してください: ");
    fscanf(stdin, "%s", name);
    for (int i = 0; i < 20; i++) {
        if (name[i] == '\0') break;
        printf("%c: %d\n", name[i], (int)name[i]);
    }

    for (int i = 65; i <= 90; i++) {
        printf("%c", (char)i);
    }
    for (int i = 97; i <= 122; i++) {
        printf("%c", (char)i);
    }
    putchar('\n');

    printf("%s\n", "abcdef\b");

    for (int i = 'A'; i <= 'Z'; i++) {
        printf("%c: %d\n", i, i);
    }
    putchar('\n');

    return 0;
}