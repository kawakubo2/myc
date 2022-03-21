#ifndef ___BinTree
#define ___BinTree

#include "Member.h"

/*--- ノード ---*/
typedef struct __bnode {
    Member         data;
    struct __bnode *left;
    struct __bnode *right;
} BinNode;

/*--- 探索 ---*/
BinNode *Search(BinNode *p, const Member *x);

/*--- ノードの挿入 ---*/
BinNode *Add(BinNode *p, const Member *x);

/*--- ノードの削除 ---*/
int Remove(BinNode **root, const Member *x);

/*--- ノードの表示 ---*/
void PrintTree(const BinNode *p);

/*--- ノードを降順に表示 ---*/
void PrintTreeReverse(const BinNode *p);

/*--- 最小のキー値を持つノードを取得 ---*/
BinNode *GetMinNode(BinNode *p);

/*--- 最大のキー値を持つノードを取得 ---*/
BinNode *GetMaxNode(BinNode *p);

/*--- 全ノードの削除 ---*/
void FreeTree(BinNode *p);

#endif