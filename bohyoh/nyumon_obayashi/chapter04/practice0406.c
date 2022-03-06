#include <stdio.h>

int main(void)
{
    int i, no;

    do {
        printf("正の整数を入力してください : ");
        scanf("%d", &no);
    } while (no <= 0);

    puts("\n---< 解法1 >---");
    i = 2;
    while (i <= no) {
        printf("%d ", i);
        i += 2;
    }
    putchar('\n');
    
    puts("\n---< 解法2 >---");
    i = 1;
    while (i <= no) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }
    putchar('\n');

    puts("\n---< 解法3 >---");
    int end = no / 2;
    i = 0;
    while (i <= end) {
        printf("%d ", i * 2);
        i++;
    }
    putchar('\n');

    return 0;
}

