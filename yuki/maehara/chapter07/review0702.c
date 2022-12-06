#include <stdio.h>

int main(void)
{
    int i = 0;
    while (i < 10) {
        printf("%d: ", i);
        int j = 0;
        while (j < i) {
            putchar('*');
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}