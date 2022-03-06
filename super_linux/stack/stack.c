#include "linkedlist.h"

void push(int val) {
    add_last(val);
}

Node *pop() {
    return remove_last();
}
