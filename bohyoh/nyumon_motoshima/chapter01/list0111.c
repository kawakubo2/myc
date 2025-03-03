#include <stdio.h>

int main(void)
{
    int no;

    printf("整数: ");
    // 標準入力をサポートする関数
    scanf("%d", &no);

    printf("あなたは%dと入力しましたね。\n", no);

    return 0;
}