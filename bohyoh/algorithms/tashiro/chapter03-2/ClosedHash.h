#ifndef __ClosedHash
#define __ClosedHash

#include "Member.h"

typedef enum {
    Occupied, Empty, Deleted
} Status;

typedef struct {
    Member data;
    Status stat;
} Bucket;

typedef struct {
    int size;
    Bucket *table;
} ClosedHash;

/*--- ハッシュ表を初期化 ---*/
int Initialize(ClosedHash *h, int size);

/*--- 探索 ---*/
Bucket *Search(const ClosedHash *h, const Member *x);

/*--- データの追加  ---*/
int Add(ClosedHash *h, const Member *x);

/*--- データを削除 ---*/
int Remove(ClosedHash *h, const Member *x);

/*--- ハッシュ表をダンプ ---*/
void Dump(const ClosedHash *h);

/*--- 全データの削除 ---*/
void Clear(ClosedHash *h);

/*--- ハッシュ表を後始末 ---*/
void Terminate(ClosedHash *h);

#endif