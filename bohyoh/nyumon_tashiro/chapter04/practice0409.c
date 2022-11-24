#include <stdio.h>

int main()
{
    int i = 0;
    int n;
    printf("整数: "); fscanf(stdin, "%d", &n);
    while (i < n) {
        if (i % 2 == 0) {
            putchar('+');
        } else {
            putchar('-');
        }
        i++;
    }
    putchar('\n');

    return 0;
}