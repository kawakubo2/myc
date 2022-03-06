#include <stdio.h>

int mypow(int n, int p)
{
    int i, result = 1;
    for (i = 0; i < p; i++) {
        result *= n;
    }
    return result;
}

int main(void)
{
    unsigned short int a, b;

    while(1) {
        printf("1:左シフト 2:右シフト 3:終了 > ");
        int sw;
        scanf("%d", &sw);
        if (sw == 3) break;
        if (sw != 1 && sw != 2) {
           puts("1または2を指定してください");
           continue;
        }
        
        printf("非負の整数を入力してください。\n");
        printf("a > ");
        scanf("%hu", &a);
        b = a;
        
        printf("ビット数 > ");
        int bits;
        scanf("%d", &bits);
        if (sw == 1) {
            a <<= bits;
            printf("%uを%d左シフトした値:%u %uを%d倍した値:%u\n", b, bits, a, b, mypow(2, bits), b * mypow(2, bits));
        } else if (sw == 2) {
            a >>= bits;
            printf("%uを%d右シフトした値:%u %uを%d分の1した値:%u\n", b, bits, a, b, mypow(2, bits), b / mypow(2, bits));
        }
    }

    return 0;
}

