#include <stdio.h>

int main(void)
{
    for (int i = 1, j = 1; printf("%d\n", i * j), i <= 5 && j <= 5; i++, j++); 
    return 0;
}