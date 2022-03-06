#include <stdio.h>

int main(void)
{
    int no; // 0-100

    do {
        printf("整数を入力してください : ");
        scanf("%d", &no);
    } while (no < 0 || no > 100);

    printf("no = %d\n", no);

    return 0;
}


