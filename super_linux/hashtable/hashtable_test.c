#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "hashtable.h"

int main(void)
{
    int i, sw, key;
    char value[20];
    while (1) {
        printf("1.追加 2.検索 3.削除 4.表示 9.終了: ");
        scanf("%d", &sw);
        if (sw == 9) break;
        if (sw == 1) {
            printf("キー: "); scanf("%d", &key);
            printf("値: "); scanf("%s", value);
            put(key, value);
            print_hash(key);
        } else if (sw == 2) {
            printf("キー: "); scanf("%d", &key);
            if (search(key, value))  {
                printf("キー「%d」に対応する値は「%s」です。\n", key, value);
            } else {
                printf("キー「%d」に対応する値が見つかりません。\n", key);
            }
        } else if (sw == 3) {
            printf("キー: "); scanf("%d", &key);
            if (del(key)) {
                printf("キー「%d」を削除しました。\n", key);
            } else {
                printf("キー「%d」は見つかりません。\n", key);
            }
            print_hash(key);
        } else if (sw == 4) {
            for (i = 0; i < size(); i++) {
                printf("%2d : ", i);
                print_hash(i);
            }
        } else {
            printf("1または2を選択してください。\n");
        }
        putchar('\n');
    }
    return 0;
}


