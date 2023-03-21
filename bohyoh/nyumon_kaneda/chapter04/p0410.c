#include <stdio.h>

int main(void)
{
    int i = 0, no;
    printf("正の整数: ");
    fscanf(stdin, "%d", &no);

    while(no-- > 0) {
        if (i++ % 2 == 0) {
            putchar('+');
        } else {
            putchar('-');
        }
    }
    putchar('\n');
    
    return 0;
}