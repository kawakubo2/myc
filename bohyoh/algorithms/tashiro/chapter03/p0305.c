#include <stdio.h>
#include <stdlib.h>

int bin_search2(const int a[], int n, int key)
{
    int i;
    int target_index = -1;
    int left = 0;
    int right = n - 1;
    int center;
    do {
        center = (left + right) / 2;
        if (a[center] == key) {
            target_index = center;
            break;
        } else if (a[center] < key) {
            left = center + 1;
        } else {
            right = center - 1;
        }
    } while (left <= right);
    if (target_index > -1) {
        for (i = target_index; i >= 0; i--) {
            if (a[i] != key) {
                target_index = i + 1;
                break; 
            }
            if (i == 0) {
                target_index = 0;
            }
        }
    }
    return target_index;
}

int main(void)
{
    int i, nx, ky, idx;
    int *x;
    puts("2分探索");
    printf("要素数: ");
    fscanf(stdin, "%d", &nx);
    x = calloc(nx, sizeof(int));

    printf("昇順に入力してください。\n");
    printf("x[0]: ");
    fscanf(stdin, "%d", &x[0]);

    for (i = 1; i < nx; i++) {
        do {
            printf("x[%d]: ", i);
            fscanf(stdin, "%d", &x[i]);
        } while (x[i] < x[i - 1]);
    }

    printf("探す値: ");
    fscanf(stdin, "%d", &ky);

    idx = bin_search2(x, nx, ky);
    if (idx == -1) {
        puts("探索に失敗しました。");
    } else {
        printf("%dはx[%d]にあります。\n", ky, idx);
    }
    free(x);
    return 0;
}