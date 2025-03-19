#include <stdio.h>

/*
30を超える数値を表示したくない場合は
30を超えた場合、breakで内側のループを
抜けることで実現できる。
*/
int main(void)
{
    int counter = 0;

    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            counter++;
            if (i * j > 30) {
                break; // 内側のループだけを抜け出す
            }
            printf("%3d", i * j);
        }
        printf("\n");
    }
    printf("ループ回数: %d\n", counter);

    return 0;
}

