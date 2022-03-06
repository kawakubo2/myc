#include <stdio.h>

#define NUMBER 5

int search_idx(const int v[], int idx[], int key, int n)
{
    int i, count =  0;
    for (i = 0; i < n; i++) {
        if (v[i] == key) {
            idx[count++] = i;
        }
    }
    return count;
}

int main(void)
{
    int i, key, cnt;
    int source[NUMBER];
    int target[NUMBER];

    for (i = 0; i < NUMBER; i++) {
        printf("source[%d]:", i);
        scanf("%d", &source[i]);
    }

    printf("探す値:");
    scanf("%d", &key);

    cnt = search_idx(source, target, key, NUMBER);

    if (cnt == 0) {
        printf("%dは配列の中には存在しません。\n", key);
    } else {
        printf("%dは配列の", key);
        for (i = 0; i < cnt; i++) {
            printf("、%d番目", target[i] + 1);
        }
        printf("に存在します。\n");
    }
    
    return 0;
}

