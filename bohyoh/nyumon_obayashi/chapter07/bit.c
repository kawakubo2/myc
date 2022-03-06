#include <stdio.h>
#include "chapter07.h"

int main(void)
{
    unsigned int n;
    printf("正の整数を入力してください : ");
    scanf("%u", &n);

    print_bits(n);
    printf("\n");

    int m;
    while(1) {
        printf("1.左シフト 2.右シフト 9.終了 : ");
        scanf("%d", &m);

        if (m == 1) {
            n <<= 1;
            print_bits(n);
            printf("\n");
        } else if  (m == 2) {
            n >>= 1;
            print_bits(n);
            printf("\n");
        } else {
            break;
        }
    }

    return 0;
}

