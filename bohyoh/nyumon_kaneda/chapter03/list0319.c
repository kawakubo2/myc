#include <stdio.h>

int main(void)
{
    int no;
    printf("整数値: "); fscanf(stdin, "%d", &no);

    if (no % 3 == 0) {
        puts("3で割り切れます。");
    } else if (no % 3 == 1) {
        puts("3で割った剰余は1です。");
    } else {
        puts("3で割った剰余は2です。");
    }

    return 0;
}