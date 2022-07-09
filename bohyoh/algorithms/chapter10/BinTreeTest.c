#include <stdio.h>
#include "Member.h"
#include "BinTree.h"

typedef enum {
    TERMINATE, ADD, REMOVE, SEARCH, GET_MIN, GET_MAX, PRINT, PRINT_REVERSE
} Menu;

Menu SelectMenu(void)
{
    int ch;
    do {
        printf("\n(1)挿入 (2)削除 (3)探索 (4)最小値探索 (5)最大値探索 (6)表示 (7)表示[降順] (0)終了 : ");
        scanf("%d", &ch);
    } while (ch < TERMINATE || ch > PRINT_REVERSE);
    return (Menu)ch;
}

/*--- メイン関数 ---*/
int main(void)
{
    Menu menu;
    BinNode *root = NULL;

    do {
        Member x;
        BinNode *temp;
        BinNode *min;
        BinNode *max;

        switch(menu = SelectMenu()) {
            /*--- ノードの挿入 ---*/
            case ADD:
                x = ScanMember("挿入", MEMBER_NO | MEMBER_NAME);
                root = Add(root, &x);
                break;
            /*--- ノードの削除 ---*/
            case REMOVE:
                x = ScanMember("削除", MEMBER_NO);
                Remove(&root, &x);
                break;
            /*--- ノードの探索 ---*/
            case SEARCH:
                x = ScanMember("探索", MEMBER_NO);
                if ((temp = Search(root, &x)) != NULL)
                    PrintLnMember(&temp->data);
                break;
            /*--- 最小のキー値を持つノードを取得 ---*/
            case GET_MIN:
                min = GetMinNode(root);
                if (min != NULL)
                    printf("最小のキー値: %d", min->data.no);
                break;
            /*--- 最大のキー値を持つノードを取得 ---*/
            case GET_MAX:
                max = GetMaxNode(root);
                if (max != NULL)
                    printf("最大のキー値: %d", max->data.no);
                break;

            /*--- 全ノードの表示 ---*/
            case PRINT:
                puts("【一覧表】");
                PrintTree(root);
                break;
            /*--- 全ノードの降順表示 ---*/
            case PRINT_REVERSE:
                puts("【一覧表(降順)】");
                PrintTreeReverse(root);
                break;
        }
    } while (menu != TERMINATE);
    FreeTree(root);
    return 0;
}