#include <stdio.h>

int main(void)
{
    int year,month,day;

    printf("年月日を\"/\"区切りで入力してください(例: 2021/12/31) : ");
    scanf("%d/%d/%d", &year, &month, &day);

    printf("%d年%d月%d日\n", year, month, day);

    return 0;
}
