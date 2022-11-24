#include <stdio.h>

int main(void)
{
    int c;
    long lines = 0L;
    while((c = getchar()) != EOF) {
        if (c == '\n') {
            lines++;
        }
    }
    printf("Lines = %ld\n", lines);

    return 0;
}