#include <stdio.h>

int main(void)
{
    int p;
    printf("降水確率を入力してください。");
    scanf("%d", &p);

    if (p >= 50) {
        printf("傘が必要です。\n");
    } else {
        printf("傘は必要ありません。\n");
        printf("学校や会社が近くであれば不要かも。\n");
    }

    return 0;
}
