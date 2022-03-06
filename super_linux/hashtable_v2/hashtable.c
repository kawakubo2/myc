#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "hashtable.h"

void init(void)
{
    int i;
    for (i = 0; i < TABLE_SIZE; i++) {
        hash[i] = NULL;
    }
}

int size()
{
    return TABLE_SIZE;
}

void put(int key, char *value)
{
    int exists = 0;
    int code = key % TABLE_SIZE;
    Node *temp = hash[code];
    while (temp != NULL) {
        if (temp->key == key) {
            strcpy(temp->value, value);
            exists = 1;
            break;
        }
        temp = temp->next;
    }
    if (!exists) {
        Node *new_node = (Node *)malloc(sizeof(Node));
        new_node->key = key;
        strcpy(new_node->value, value);
        new_node->next = hash[code];
        hash[code] = new_node; 
    }
}

int del(int key)
{
    int result = 0;
    int search_count = 0;
    Node *removed;
    Node *prev;
    int code = key % TABLE_SIZE;
    Node *temp = hash[code];
    while (temp != NULL) {
        if (temp->key == key) {
            if (search_count == 0) {
                hash[code] = temp->next;
            } else {
                prev->next = temp->next;
            }
            free(temp);
            result = 1;
            break;
        }
        search_count++;
        prev = temp;
        temp = temp->next;
    }
    return result;
}

int search(int key, char *value)
{
    int result = 0;
    Node *temp = hash[key % TABLE_SIZE];
    while (temp != NULL) {
        if (temp->key == key) {
            result = 1;
            strcpy(value, temp->value);
            break;
        }
        temp = temp->next;
    }
    return result;
}

void print_hash(int key)
{
    int code = key % TABLE_SIZE;
    Node *temp = hash[code];
    while(temp != NULL) {
        printf("[%d]=%s ", temp->key, temp->value);
        temp = temp->next;
    };
    putchar('\n');
}
