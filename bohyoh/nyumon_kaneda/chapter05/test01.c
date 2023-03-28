#include <stdio.h>

int main(void)
{
    int num;
    printf("何人分の点数を入力しますか: ");
    fscanf(stdin, "%d", &num);
    int a[num];
    for (int i = 0; i < num; i++) {
        printf("a[%d]: ", i);
        fscanf(stdin, "%d", &a[i]);
    }
    puts("--------------------");
    for (int i = 0; i < num; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}