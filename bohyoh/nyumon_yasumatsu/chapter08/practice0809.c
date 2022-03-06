#include <stdio.h>

int main(void)
{
    int ch;
    int count = 0;
    char lf = '\n';

    while ((ch = getchar()) != EOF) {
        if (ch == lf) count++;
    }

    printf("%d行読み込みました。\n", count);

    return 0;
}

