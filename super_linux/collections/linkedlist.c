#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedlist.h"

void init()
{
    puts("started...");
    head = NULL;
    tail = NULL;
}

// 末尾へ追加
void push(char *val)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    strcpy(temp->val, val);
    temp->prev = tail;
    temp->next = NULL;
    if (tail == NULL) {
        head = tail = temp;
    } else {
        tail->next = temp;
        tail = temp;
    }
}

Node *pop()
{
    Node *temp = tail;
    if (tail == NULL) {
        printf("キューは空です。");
    } else {
        if (head == tail) {
            head = tail = NULL;
        } else {
            tail = tail->prev;
            tail->next = NULL;        
        }
    }   
    return temp;
}

void unshift(char *val)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    strcpy(temp->val, val);
    temp->next = head;
    temp->prev = NULL;
    if (head == NULL) {
        head = tail = temp;
    } else {
        head->prev = temp;
        head = temp;
    }
}

// 先頭から削除
Node *shift()
{
    Node *temp = head;
    if (head == NULL) {
        printf("\aキューは空です。\n");
    } else {
        if (head == tail) {
            head = tail = NULL;
        } else {
            head = head->next;
            head->prev = NULL;
        }
    }
    return temp;
}

void print_queue()
{
    Node *temp = head;
    while(temp != NULL) {
        printf("%s ", temp->val);
        temp = temp->next;
    };
    putchar('\n');
}
