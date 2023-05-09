#include <stdio.h>
#include "Member.h"
#include "ClosedHash.h"

typedef enum {
    TERMINATE, ADD, DELETE, SEARCH, CLEAR, DUMP
} Menu;

Menu SelectMenu(void) {
    int ch; 
    do {
        printf("(1)追加 (2)削除 (3)検索 (4)全削除 (5)ダンプ (0)終了: ");
        fscanf(stdin, "%d", &ch);
    } while (ch < TERMINATE || ch > DUMP);
    return (Menu)ch;
}

int main(void)
{
    Menu menu;
    ClosedHash hash;
    Initialize(&hash, 13);
    do {
        int result;
        Member x;
        Bucket *temp;
        switch (menu = SelectMenu()) {
            case ADD:
                x = ScanMember("追加", MEMBER_NO | MEMBER_NAME);
                result = Add(&hash, &x);
                if (result) {
                    printf("エラー: 追加に失敗しました。(%s)。\n",
                        (result == 1) ? "登録ずみ": "メモリ不足");
                }
                break;
            case DELETE:
                x = ScanMember("削除", MEMBER_NO);
                result = Remove(&hash, &x);
                if (result == 1) {
                    printf("エラー: その番号のデータは存在しません。\n");
                }
                break;
            case SEARCH:
                x = ScanMember("探索", MEMBER_NO);
                temp = Search(&hash, &x);
                if (temp == NULL) {
                    printf("探索に失敗しました。");
                } else {
                    printf("探索に成功しました。");
                    PrintLnMember(&temp->data);
                }
                break;
            case CLEAR:
                Clear(&hash);
                break;
            case DUMP:
                Dump(&hash);
                break;
        }
    } while (menu != TERMINATE);
    Terminate(&hash);

    return 0;
}