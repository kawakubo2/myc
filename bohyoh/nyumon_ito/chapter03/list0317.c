#include <stdio.h>

int main(void)
{
    int month;
    printf("何月ですか: "); scanf("%d", &month);

    if (month >= 3 && month <= 5)
        printf("%d月は春です。\n", month);
    else if (month >= 6 && month <= 8)
        printf("%d月は夏です。\n", month);
    else if (month >= 9 && month <= 11)
        printf("%d月は秋です。\n", month);
    else if (month == 1 || month == 2 || month == 12)
        printf("%d月は冬です。\n", month);
    else
        printf("%d月はありませんよ！\a\n", month);

    if (month < 1 || month > 12)
        printf("%d月はありませんよ！\a\n", month);
    else if (month <= 2)
        printf("冬\n");
    else if (month <= 5)
        printf("春\n");
    else if (month <= 8)
        printf("夏\n");
    else if (month <= 11)
        printf("秋\n");
    else
        printf("冬\n");

        

    return 0;
}