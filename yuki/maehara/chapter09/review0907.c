#include <stdio.h>

#define MAX_DATA 10

int main(void)
{
    int data[MAX_DATA] = { 31, 41, 59, 26, 53, 58, 97, 93, 23, 84 };

    printf("並べ替える前\n");
    for (int i = 0; i < MAX_DATA; i++) {
        printf("%d ", data[i]);
    }
    putchar('\n');
    for (int i = 0; i < MAX_DATA - 1; i++) {
        for (int j = i + 1; j < MAX_DATA; j++) {
            if (data[i] > data[j]) {
                int tmp = data[i];
                data[i] = data[j];
                data[j] = tmp;
            }
        }
    }
    printf("並べ替えた後\n");
    for (int i = 0; i < MAX_DATA; i++) {
        printf("%d ", data[i]);
    }
    putchar('\n');
}