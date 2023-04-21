#include <stdio.h>

#define NUM 7 // オブジェクト形式マクロ

int main(void)
{
    int a[NUM];
    for (int i = 0; i < NUM; i++) {
        a[i] = NUM - i;
    };
    for (int i = 0; i < NUM; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}