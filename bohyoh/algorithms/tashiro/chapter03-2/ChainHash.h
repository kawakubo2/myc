#ifndef __ChainHash
#define __ChainHash

#include "Member.h"

typedef struct __node {
    Member         data;
    struct __node *next;
} Node;

typedef struct {
    int size;
    Node **table;
} ChainHash;

/*--- ハッシュ表を初期化 ---*/
int Initialize(ChainHash *h, int size);

/*--- 探索 ---*/
Node *Search(const ChainHash *h, const Member *x);

/*--- データの追加 ---*/
int Add(ChainHash *h, const Member *x);

/*--- データの削除 ---*/
int Remove(ChainHash *h, const Member *x);

/*--- ハッシュ表をダンプ ---*/
void Dump(const ChainHash *h);

/*--- 全データの削除 ---*/
void Clear(ChainHash *h);

/*--- ハッシュ表を後始末 ---*/
void Terminate(ChainHash *h);

#endif