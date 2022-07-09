#include <stdio.h>
#include <stdlib.h>
#include "Member.h"
#include "BinTree.h"

/*--- 1つのノードを動的に確保 ---*/
static BinNode *AllocBinNode(void)
{
    return calloc(1, sizeof(BinNode));
}

/*--- ノードの各メンバに値を設定 ---*/
/*
 const BinNode *left
 const BinNode *right
 のconstを削除

 constを付けたままだと
 「assignment discard 'const' qualifire from pointer target type」
 を怒られてしまう
*/
static void SetBinNode(BinNode *n, const Member *x, BinNode *left, BinNode *right)
{
    n->data = *x;
    n->left = left;
    n->right = right;
}

/*--- 探索 ---*/
BinNode *Search(BinNode *p, const Member *x)
{
    int cond;
    if (p == NULL)
        return NULL;
    else if ((cond = MemberNoCmp(x, &p->data)) == 0)
        return p;
    else if (cond < 0)
        Search(p->left, x);
    else
        Search(p->right, x);
}

/*--- ノードを挿入 ---*/
BinNode *Add(BinNode *p, const Member *x)
{
    int cond;
    if (p == NULL) {
        p = AllocBinNode();
        SetBinNode(p, x, NULL, NULL);
    } else if ((cond = MemberNoCmp(x, &p->data)) == 0) {
        printf("[エラー] %dは既に登録されています。\n", x->no);
    } else if (cond < 0) {
        p->left = Add(p->left, x);
    } else {
        p->right = Add(p->right, x);
    }
    return p;
}

/*--- ノードを削除 ---*/
int Remove(BinNode **root, const Member *x)
{
    BinNode *next, *temp;
    BinNode **left;
    BinNode **p = root;
    // 削除ノードの探索
    while (1) {
        int cond;
        if (*p == NULL) {
            printf("【エラー】%dは登録されていません。\n", x->no);
            return -1;
        } else if ((cond = MemberNoCmp(x, &(*p)->data)) == 0) {
            break;
        } else if (cond < 0) {
            p = &((*p)->left);
        } else {
            p = &((*p)->right);
        }
    }
    // 削除ノードの削除
    if ((*p)->left ==NULL) {
        next = (*p)->right;
    } else {
        left = &((*p)->left);
        while ((*left)->right != NULL) {
            left = &(*left)->right;
        }
        next = *left;
        *left = (*left)->left;
        next->left = (*p)->left;
        next->right = (*p)->right;
    }
    temp = *p;
    *p = next;
    free(temp);

    return 0;
}

/*--- 全ノードのデータを表示 ---*/
void PrintTree(const BinNode *p)
{
    if (p != NULL) {
        PrintTree(p->left);
        PrintLnMember(&p->data);
        PrintTree(p->right);
    }
}

/*--- ノードを降順に表示 ---*/
void PrintTreeReverse(const BinNode *p)
{
    if (p != NULL) {
        PrintTreeReverse(p->right);
        PrintLnMember(&p->data);
        PrintTreeReverse(p->left);
    }
}

/*--- 最小のキー値を持つノードを取得 ---*/
BinNode *GetMinNode(BinNode *p)
{
    if (p == NULL) return NULL;
    BinNode *temp = p;
    while(1) {
        if (temp->left != NULL)
            temp = temp->left;
        else
            return temp;
    }
}
/*--- 最大のキー値を持つノードを取得 ---*/
BinNode *GetMaxNode(BinNode *p)
{
    if (p == NULL) return NULL;
    BinNode *temp = p;
    while(1) {
        if (temp->right != NULL)
            temp = temp->right;
        else
            return temp;
    }
}


/*--- 全ノードの削除 ---*/
void FreeTree(BinNode *p)
{
    if (p != NULL) {
        FreeTree(p->left);
        FreeTree(p->right);
        free(p);
    }
}