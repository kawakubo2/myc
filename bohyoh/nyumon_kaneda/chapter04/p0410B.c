#include <stdio.h>

int main(void)
{
    int i = 0, no;
    printf("正の整数: ");
    fscanf(stdin, "%d", &no);

    while(no-- > 0) {
        if (i % 3 == 0) {
            putchar('+');
        } else if (i % 3 == 1) {
            putchar('-');
        } else {
            putchar('*');
        }
        i++;
    }
    putchar('\n');
    
    return 0;
}