#include <stdio.h>

int main(void)
{
    int i = 0, no;
    printf("正の整数: ");
    fscanf(stdin, "%d", &no);

    while(no-- > 0) {
        putchar(i++ % 2 == 0 ? '+': '-');
    }
    putchar('\n');
    
    return 0;
}