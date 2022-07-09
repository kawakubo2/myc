#include <stdio.h>

int main(void)
{
    int num = 5;
    num = num + 1;
    printf("num=%d\n", num);
    num += 1;
    printf("num=%d\n", num);
    num++;
    printf("num=%d\n", num);

    printf("num=%d\n", ++num);
}