#include <stdio.h>
#include <limits.h>
#include "array_queue.h"

int main(void)
{
    int sw, val, result;
    while (1) {
        printf("1.追加(enqueue) 2.削除(dequeue) 9.終了 : " );
        scanf("%d", &sw);
        if (sw == 9) break;
        if (sw == 1) {
            printf("整数値: ");
            scanf("%d", &val);
            enqueue(val);
            print_queue();
        } else if (sw == 2) {
            result = dequeue();
            if (result != INT_MAX) {
                printf("%dを先頭から削除\n", result);
            }
            print_queue();
        } else {
            printf("1または2を選択してください。\n");
        }
    }
}