#include <stdio.h>

int main(void)
{
    int i = 0, no;
    printf("正の整数: "); scanf("%d", &no);

    while (i <= no) {
        printf("%d ", i++);
    }
    printf("\n");
    
    return 0;
}