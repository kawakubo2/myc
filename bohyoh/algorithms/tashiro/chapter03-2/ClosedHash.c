#include <stdio.h>
#include <stdlib.h>
#include "Member.h"
#include "ClosedHash.h"

/*--- ハッシュ関数(keyのハッシュ値を返す) ---*/
static int hash(int key, int size)
{
    return key % size;
}

/*--- 再ハッシュ関数 ---*/
static int rehash(int key, int size)
{
    return (key + 1) % size;
}

/*--- ノードの各メンバに値を設定 ---*/
static void SetBucket(Bucket *n, const Member *x, Status stat)
{
    n->data = *x;
    n->stat = stat;
}
/*--- ハッシュ表を初期化 ---*/
int Initialize(ClosedHash *h, int size)
{
    int i;
    if ((h->table = calloc(size, sizeof(Bucket))) == NULL) {
        h->size = 0;
        return 0;
    }
    h->size = size;
    for (i = 0; i < size; i++) {
        h->table[i].stat = Empty;
    }
    return 1;
}

/*--- 探索 ---*/
Bucket *Search(const ClosedHash *h, const Member *x)
{
    int i;
    int key = hash(x->no, h->size);
    Bucket *p = &h->table[key];
    for (i = 0; p->stat != Empty && i < h->size; i++) {
        if (p->stat == Occupied && p->data.no == x->no) {
            return p;
        }
        key = rehash(key, h->size);
        p = &h->table[key];
    }
    return NULL;
}

/*--- データの追加 ---*/
int Add(ClosedHash *h, const Member *x)
{
    int i ;
    int key = hash(x->no, h->size);
    Bucket *p = &h->table[key];

    if (Search(h, x)) {
        return 1;
    }
    for (i = 0; i < h->size; i++) {
        if (p->stat == Empty || p->stat == Deleted) {
            SetBucket(p, x, Occupied);
            return 0;
        }
        key = rehash(key, h->size);
        p = &h->table[key];
    }
    return 2;
}

/*--- データの削除 ---*/
int Remove(ClosedHash *h, const Member *x)
{
    Bucket *p = Search(h, x);
    if (p == NULL) {
        return 1;
    }
    p->stat = Deleted;
    return 0;
}

/*--- ハッシュ表をダンプ ---*/
void Dump(const ClosedHash *h)
{
    int i;
    for (i = 0; i < h->size; i++) {
        printf("%02d : ", i);
        switch (h->table[i].stat) {
            case Occupied :
                printf("%d (%s)\n",
                    h->table[i].data.no, h->table[i].data.name);
                break;
            case Empty :
                printf("--- 未登録 ---\n"); break;
            case Deleted:
                printf("--- 削除済み ---\n"); break; 
        }
    }
}

void Clear(ClosedHash *h)
{
    int i;
    for (i = 0; i < h->size; i++) {
        h->table[i].stat = Empty;
    }
}

void Terminate(ClosedHash *h)
{
    Clear(h);
    free(h->table);
    h->size = 0;
}
