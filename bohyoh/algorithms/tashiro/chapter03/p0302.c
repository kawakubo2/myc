#include <stdio.h>
#include <stdlib.h>

int search(int a[], int n, int key) 
{
    int i = 0;
    a[n] = key;
    printf("   |");
    for (i = 0; i < n; i++) {
        printf("%3d", i);
    }
    putchar('\n');
    i = 0;
    while(1) {
        printf("   |");
        for (int j = 0; j < n; j++) {
            if (i == j) {
                printf("  *");
            }
            printf("   ");
        }
        printf("%3d|", i);
        for (int j = 0; j < n; j++) {
            printf("%3d", a[i]);
        }
        putchar('\n');
        if (a[i] == key) {
            break;
        }
        i++;
    }
    return i == n ? -1: i;
}

int main(void)
{
    int i, nx, ky, idx;
    puts("線形探索(番兵法)");
    printf("要素数: ");
    fscanf(stdin, "%d", &nx);
    int x[nx];
    for (i = 0; i < nx; i++) {
        printf("x[%d]: ", i);
        fscanf(stdin, "%d", &x[i]);
    }
    printf("探す値: ");
    fscanf(stdin, "%d", &ky);

    idx = search(x, nx, ky);

    if (idx == -1) {
        puts("探索に失敗しました。");
    } else {
        printf("%dはx[%d]にあります。\n", ky, idx);
    }

    return 0;
}