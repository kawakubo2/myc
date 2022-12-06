#include <stdio.h>

#define NUMBER 7

int search_idx(const int v[], int idx[], int key, int n)
{
    int i;
    int cnt = 0;
    for (i = 0; i < n; i++) {
        if (v[i] == key) {
            idx[cnt++] = i;
        }
    }
    return cnt;
}

void print_array(const int v[], int n)
{
    int i;
    printf("{ ");
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("}");
    putchar('\n');
}


int main(void)
{
    int i, key, num;
    int vx[] = {1, 7, 5, 7, 2, 4, 7};
    int vy[NUMBER] = {-1};
    print_array(vx, NUMBER);

    printf("検索したい値: "); fscanf(stdin, "%d", &key);

    num = search_idx(vx, vy, key, NUMBER);

    print_array(vy, num);    

}