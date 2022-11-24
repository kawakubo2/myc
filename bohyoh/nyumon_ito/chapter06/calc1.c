#include <stdio.h>

int total = 0;

void add(int n)
{
    total += n;
}
void sub(int n)
{
    total -= n;
}

int main(void)
{
    int sw, num;
    while (1) {
        printf("1.加算 2.減算 9.終了: ");
        scanf("%d", &sw);
        if (sw == 9) break;
        switch(sw) {
            case 1:
                printf("整数: "); scanf("%d", &num);
                add(num);
                printf("total=%d\n", total);
                break;
            case 2:
                printf("整数: "); scanf("%d", &num);
                sub(num);
                printf("total=%d\n", total);
                break;
            default:
                printf("1または2を選択してください。\n");
                break;
        }
    }
    return 0;
}