#include "collections.h"

Node *head;
Node *tail;

void init();

// 末尾へ追加
void push(char *val);

// 末尾から削除
Node *pop();

// 先頭へ追加
void unshift(char *val);

// 先頭から削除
Node *shift();

void print_queue();