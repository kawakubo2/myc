#include <stdio.h>

int main(void) 
{
    int year, month, date;
    printf("年月日を半角空白区切りで入力してください : ");
    scanf("%d %d %d", &year, &month, &date);

    printf("%d年%d月%d日\n", year, month, date);

    return 0;
}

