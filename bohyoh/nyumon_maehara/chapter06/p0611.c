#include <stdio.h>

int search_idx(const int v[], int idx[], int key, int source_size)
{
    int idx_size = 0;
    for (int i = 0; i < source_size; i++) {
        if (v[i] == key) {
            idx[idx_size++] = i;
        }
    }
    return idx_size;
}
int main(void)
{
    int size, key, idx_size;
    printf("要素数: "); fscanf(stdin, "%d", &size);
    int x[size];
    int y[size];
    for (int i = 0; i < size; i++) {
        printf("x[%d]: ", i); fscanf(stdin, "%d", &x[i]);
    }
    printf("検索値: "); fscanf(stdin, "%d", &key);
    idx_size = search_idx(x, y, key, size);
    if (idx_size) {
        printf("検索値\"%d\"は", key);
        for (int i = 0; i < idx_size; i++) {
            printf("%d,", y[i] + 1);
        }
        printf("\b番目に存在します。\n");
    } else {
        printf("検索値\"%d\"は存在しません。\n", key);
    }

}
