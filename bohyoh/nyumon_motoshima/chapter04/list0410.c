#include <stdio.h>

int main(void)
{
    int no;
    do 
    {
        printf("正の整数: "); scanf("%d", &no);
        if (no <= 0)
            puts("正の整数を入力してください。");
    } while (no <= 0);

    printf("その数を逆から読みと");
    while (no > 0) {
        printf("%d", no % 10);
        no /= 10; // no = no / 10
    }
    printf("です。\n");

    return 0;
}

