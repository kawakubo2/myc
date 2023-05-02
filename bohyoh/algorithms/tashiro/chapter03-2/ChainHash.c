#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Member.h"
#include "ChainHash.h"

/*--- ハッシュ関数(keyのハッシュ値を返す)*/
static int hash(const char *key, int size)
{
    return (int)(key[0]) % size;
}

/*--- ノードの各メンバに値を設定---*/
static void SetNode(Node *n, const Member *x, Node *next) {
    n->data = *x;
    n->next = next;
}
int Initialize(ChainHash *h, int size) {
    int i;
    if ((h->table = calloc(size, sizeof(Node *))) == NULL) {
        h->size = 0;
        return 0;
    }
    h->size = size;
    for (int i = 0; i < size; i++) {
        h->table[i] = NULL;
    }
    return 0;
}

Node *Search(const ChainHash *h, const Member *x) {
    int key = hash(x->name, h->size);
    Node *p = h->table[key];
    while (p != NULL) {
        if (strcmp(p->data.name, x->name) == 0) {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

int Add(ChainHash *h, const Member *x)
{
    int key = hash(x->name, h->size);
    Node *p = h->table[key];
    Node *temp;
    while (p != NULL) {
        if (strcmp(p->data.name, x->name) == 0) {
            return 1;
        }
        p = p->next;
    }
    if ((temp = calloc(1, sizeof(Node))) == NULL) {
        return 2;
    }
    SetNode(temp, x, h->table[key]);
    h->table[key] = temp;

    return 0;
}

int Remove(ChainHash *h, const Member *x)
{
    int key = hash(x->name, h->size);
    Node *p = h->table[key];
    Node **pp = &h->table[key];
    while (p != NULL) {
        if (strcmp(p->data.name, x->name) == 0)  {
            *pp = p->next;
            free(p);
            return 0;
        }
        pp = &p->next;
        p = p->next;
    }
    return 1;
}

void Dump(const ChainHash *h)
{
    int i;
    for (i = 0; i < h->size; i++) {
        Node *p = h->table[i];
        printf("%02d  ", i);
        while (p != NULL) {
            printf("---> %s (%d)   ", p->data.name, p->data.no);
            p = p->next;
        }
    putchar('\n');
    }
}
void Clear(ChainHash *h)
{
    int i;
    for (i = 0; i < h->size; i++) {
        Node *p = h->table[i];
        while (p != NULL) {
            Node *next = p->next;
            free(p);
            p = next;
        }
        h->table[i] = NULL;
    }
}

void Terminate(ChainHash *h)
{
    Clear(h);
    free(h->table);
    h->size = 0;
}