#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main(void)
{
    int sw;
    char val[10];
    Node *removed;
    init();
    do {
        printf("1.末尾に追加 2.先頭から削除 3.先頭に追加 4.末尾から削除 9.終了: ");
        scanf("%d", &sw);
        if (sw == 9) break;
        switch(sw) {
            case 1:
                printf("文字列: ");
                scanf("%s", val);
                push(val);
                print_queue();
                break;
            case 2:
                removed = shift();
                if (removed != NULL) printf("削除された値: %s\n", removed->val);
                free(removed);
                print_queue();
                break;
            case 3:
                printf("文字列: ");
                scanf("%s", val);
                unshift(val);
                print_queue();
                break;
            case 4:
                removed = pop();
                if (removed != NULL) printf("削除された値: %s\n", removed->val);
                free(removed);
                print_queue();
                break;
            default:
                printf("選択肢の中から指定してください。\n");
                break;
        }
    } while(1);
    
    return 0;
}