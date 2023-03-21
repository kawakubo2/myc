#include <stdio.h>

int main(void)
{
    int no;
    printf("正の整数: ");
    fscanf(stdin, "%d", &no);

    while(no-- > 0) {
        putchar('*');
    }
    putchar('\n');
    
    return 0;
}