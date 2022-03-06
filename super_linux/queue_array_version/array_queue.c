#include <stdio.h>
#include <limits.h>

#define QUEUE_SIZE 8

static int array[QUEUE_SIZE];
static int head = 0;
static int tail = 0;

static int count = 0;

void enqueue(int val)
{
    if (count == QUEUE_SIZE) {
        printf("キューは満杯です\n");
        return;
    }
    if (count != 0) {
        tail = (tail + 1) % QUEUE_SIZE;
    }
    array[tail] = val;
    count++;
}

int dequeue() 
{
    if (count == 0) {
        printf("キューは空です。\n");
        return INT_MAX;
    }
    int temp = array[head];
    count--;
    if (count != 0) 
        head = (head + 1) % QUEUE_SIZE;
    return temp;
}

void print_queue()
{
    int i;
    for (i = 0; i < QUEUE_SIZE; i++) {
        if (i == head && i == tail) {
            printf("| ht");
        } else if (i == head) {
            printf("|  h");
        } else if (i == tail) {
            printf("|  t");
        } else {
            printf("|   ");
        }
    }
    printf("|\n");
    if (head < tail) {
        for (i = 0; i < QUEUE_SIZE; i++) {
            if (i < head) {
                printf("    ");
            } else if (i >= head && i <= tail) {
                printf("%4d", array[i]);
            } else {
                printf("    ");
            }
        }
        putchar('\n');
    } else if (tail < head) {
        for (i = 0; i < QUEUE_SIZE; i++) {
            if (i <= tail) {
                printf("%4d", array[i]);
            } else if (i > tail && i < head) {
                printf("    ");
            } else {
                printf("%4d", array[i]);
            }
        }
        putchar('\n');
    } else {
        if (count == 0) {
            for (i = 0; i < QUEUE_SIZE; i++) {
                printf("    ");
            }
            putchar('\n');
        } else {
            for (i = 0; i < QUEUE_SIZE; i++) {
                if (i == head) {
                    printf("%4d", array[i]);
                } else {
                    printf("    ");
                }
            }
            putchar('\n');
        }
    }
        
}