#include <stdio.h>

int is_leap(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    
}

int main(void)
{
    int y;
    printf("年を入力してください : ");
    scanf("%d", &y);

    printf("西暦%d年はうるう年", y);
    if (is_leap(y))
        printf("です。");
    else
        printf("ではありません。");
    putchar('\n');

    return 0;
}

