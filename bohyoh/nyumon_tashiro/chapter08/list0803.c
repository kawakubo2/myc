#include <stdio.h>

#define puts_alert(str) (putchar('\a') , puts(str) )

int main(void)
{
    int n;
    printf("整数を入力してください: ");
    fscanf(stdin, "%d", &n);

    if (n)
        puts_alert("その数は0ではありません。");
    else
        puts_alert("その数は0です。");

    return 0;
}