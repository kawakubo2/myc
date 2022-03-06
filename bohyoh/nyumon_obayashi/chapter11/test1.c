#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int rand_range(int min, int max)
{
    return rand() % (max - min + 1);
}

int input_range(int min, int max)
{
    int result;
    static int cnt = 0;
    while(1) {
        result = rand_range(min, max + 102) - 50;
        if (result < min) {
            cnt++;
            printf("[%3d回目のエラー] %d以上の値を入力してください\n", cnt, min);
            continue;
        }
        if (result >= max) {
            cnt++;
            printf("[%3d回目のエラー] %dより小さい値を入力してください\n", cnt, max);
            continue;
        }
        break;
    }
    return result;
}

int main(void)
{
    
    srand((unsigned)time(NULL));
    int i, min = 0, max = 199, n;
    for (i = 0; i < 300; i++) {
        n = input_range(min, max);
        printf("%d\n", n);
    }

    return 0;
}



