#include "collections.h"

Node *head;
Node *tail;

void init();

// 末尾へ追加
void add_last(int val);

// 末尾から削除
Node *remove_last();

// 先頭へ追加
void unshift(int val);

// 先頭から削除
Node *shift();

void print_queue();