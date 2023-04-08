#include <stdio.h>

// 関数定義 この場合「int n」を仮引数と呼ぶ
void put_stars(int n)
{
    while(n-- > 0) {
        putchar('*');
    }
}

int main(void)
{
    int len;
    puts("左下直角二等辺三角形を作ります。");
    printf("短辺: ");
    fscanf(stdin, "%d", &len);

    for (int i = 1; i <= len; i++) {
        put_stars(i); // 関数呼び出し この場合、iを実引数と呼ぶ
        putchar('\n');
    }
    return 0;
}