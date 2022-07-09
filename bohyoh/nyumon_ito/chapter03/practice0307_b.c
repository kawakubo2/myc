#include <stdio.h>

int max(int n1, int n2) {
    return n1 > n2 ? n1 : n2;
}

int main(void)
{
    int n1 = 8;
    int n2 = 18;
    int n3 = 21;
    int n4 = 13;

    int answer = max(max(n1, n2),max(n3, n4));
    printf("最大値: %d\n", answer);
}