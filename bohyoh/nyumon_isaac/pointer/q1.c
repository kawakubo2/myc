#include <stdio.h>

void func(int a)
{
    int *b; // aのアドレスを格納するための変数
    b = &a;
    *b += 1;
    return;
}

int main(void)
{
    int num = 5;
    func(num);
    printf("num=%d\n", num);

    return 0;
}