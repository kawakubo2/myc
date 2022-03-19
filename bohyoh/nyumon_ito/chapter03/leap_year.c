#include <stdio.h>

int main(void) 
{
    int year;
    printf("年: "); scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        printf("%dは閏年です。\n", year);
    else
        printf("%dは閏年ではありません。\n", year);

    return 0;
}