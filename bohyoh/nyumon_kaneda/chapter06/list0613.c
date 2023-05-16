#include <stdio.h>

#define NUMBER 5
#define FAILED -1

int search(const int v[], int key, int n)
{
    int i = 0;
    while (1) {
        if (i == n) {
            return FAILED;
        }
        if (v[i] == key) {
            return i;
        }
        i++;
    }
}

int main(void)
{
    int ky, idx;
    int x[NUMBER];

    for (int i = 0; i < NUMBER; i++) {
        printf("x[%d]: ", i);
        fscanf(stdin, "%d", &x[i]);
    }
    printf("探す値: ");
    fscanf(stdin, "%d", &ky);

    idx = search(x, ky, NUMBER);

    if (idx == FAILED) {
        puts("\a探索に失敗しました。");
    } else {
        printf("%dは%d番目にあります。\n", ky, idx + 1);
    }

    return 0;
}