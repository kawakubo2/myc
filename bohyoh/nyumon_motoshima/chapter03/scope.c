#include <stdio.h>

// グローバルスコープ
int x = 100;

int main(void)
{

    printf("グローバルスコープのx: %d\n", x);
    int x = 200;
    {
        int x = 300;
        printf("ブロックスコープのx: %d\n", x);
    }
    printf("ローカルスコープのx: %d\n", x);
}