#include <stdio.h>

int main(void)
{
    int no, tmp;
    printf("正の整数: "); scanf("%d", &no);
    tmp = no;

    int cnt = 0;
    while (tmp > 0) {
        tmp /= 10; // tmp = tmp / 10
        cnt++;
    }
    printf("%dは%d桁です。\n", no, cnt);

    return 0;
}

