#include <stdio.h>

int main(void)
{
    int no;
    printf("整数を入力してください : ");
    scanf("%d", &no);

    if (no % 5 == 0) {
        printf("%dは5で割り切れます。\n", no);
    } else {
        printf("%dは5で割り切れません。\n", no);
    }

    return 0;
}

