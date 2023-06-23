#include <stdio.h>

int mypow(int n, int p)
{
    int result = 1;
    for (int i = 0; i < p; i++) {
        result *= n; 
    }
    return result;
}

int main(void)
{
    int a, b, c, d, n;
    printf("検証に使う整数値: "); fscanf(stdin, "%d", &a);
    c = b = a;
    printf("1.左 2.右: "); fscanf(stdin, "%d", &d);
    printf("ビット数: "); fscanf(stdin, "%d", &n);

    if (d == 1) {
        a <<= n; // a = a << n
        b *= mypow(2, n);
    } else if (d == 2) {
        a >>= n;
        b /= mypow(2, n);
    } else {
        printf("左(1)か右(2)を指定してください");
        return 1;
    }

    printf("%dを%s%dビットシフトした結果: %d\n", c, d == 1 ? "左": "右", n, a);
    printf("%dを2の%d%s結果  : %d\n", c, n, d == 1 ? "乗でかけた": "乗で割った", b);

    return 0;
}