#include <stdio.h>

int search_idx(const int a[], int n, int key, int idx[])
{
    int i, j = 0;
    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            idx[j++] = i;
        }
    }
    return j;
}

int main(void)
{
    int cnt, size, i;
    int numbers[] = {1, 9, 2, 9, 4, 6, 7, 9};
    size = sizeof(numbers) / sizeof(numbers[0]);
    int idx[size];
    int key = 9;
    cnt = search_idx(numbers, size, key, idx);

    if (cnt > 0) {
        printf("%dは配列の", key);
        for (i = 0; i < cnt; i++) {
            printf("%d,", idx[i]);
        }
        printf("\b番目に存在します。\n");
    } else {
        printf("%dは配列に存在しません。\n", key);
    }

    return 0;
}