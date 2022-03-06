#include <stdio.h>

int main(void)
{
    int no;

    printf("整数を入力してください : ");
    scanf("%d", &no);

    printf("%dに12を加えた値は%dです。\n", no, no + 12);
    printf("%dから6を減じた値は%dです。\n", no, no - 6);

    return 0;
}

