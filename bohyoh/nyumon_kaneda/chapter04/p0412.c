#include <stdio.h>

int main(void)
{
    int no, cnt = 0;
    printf("正の整数を入力してください: ");
    fscanf(stdin, "%d", &no);
    int tmp = no;
    while (tmp > 0) {
        cnt++;
        tmp /= 10;
    }
    printf("%dは%桁です。\n", no, cnt);

    return 0;
}