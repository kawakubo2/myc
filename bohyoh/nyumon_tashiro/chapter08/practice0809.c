#include <stdio.h>

int main(void)
{
    int count = 0, ch;
    while((ch = getchar()) != EOF) {
        if (ch == '\n') {
            count++;
        }
    }
    printf("%d行あります。\n", count);
}
