#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "collections.h"
#define TABLE_SIZE 10

static Node *hash[TABLE_SIZE];

void init(void);

int size();

void put(int key, char *value);

int del(int key);

int search(int key, char *value);

void print_hash(int key);

#endif