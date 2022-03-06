#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LENGTH 4

int n[LENGTH][LENGTH];
int row[LENGTH];
int col[LENGTH];

void print_array(void)
{
    puts("--------");
    int i, j;
    for (i = 0; i < LENGTH; i++) {
        for (j = 0; j < LENGTH; j++) {
            printf("%2d", n[i][j]);
        }
        putchar('\n');
    }
}

int is_finished()
{
    int i, cnt = 0;
    for (i = 0; i < LENGTH; i++) {
        if (row[i] == 4) cnt++;
    }
    return cnt == LENGTH ? 1: 0;
}

void first_row_put(int a[LENGTH], int b[LENGTH])
{
    int j;
    // j: 各列を指す
    for (j = 0; j < LENGTH; j++) {
        if (a[j] == 4 && b[j] == 1) {
            n[0][j] = 1; n[1][j] = 2; n[2][j] = 3; n[3][j] = 4;
        }
        if (a[j] == 3 && b[j] == 2) {
            n[0][j] = 2; n[1][j] = 3; n[2][j] = 4; n[3][j] = 1;
        }
        if (a[j] == 3 && b[j] == 1) {
            n[3][j] = 4;
        }
        if (a[j] == 2 && b[j] == 1) {
            n[0][j] = 3;
            n[3][j] = 4;
        }
        // a[j] == 2 && b[j] == 2の場合、埋めるセルは存在しない
        if (a[j] == 2 && b[j] == 3) {
            n[0][j] = 1; n[1][j] = 4; n[2][j] = 3; n[3][j] = 2;
        }
        if (a[j] == 1 && b[j] == 2) {
            n[0][j] = 4; n[3][j] = 3;
        }
        if (a[j] == 1 && b[j] == 3) {
            n[0][j] = 4;
        }
        if (a[j] == 1 && b[j] == 4) {
            n[0][j] = 4; n[1][j] = 3; n[2][j] = 2; n[3][j] = 1;
        }
    }
}
void first_col_put(int a[LENGTH], int b[LENGTH])
{
    int i;
    // i: 各行を指す
    for (i = 0; i < LENGTH; i++) {
        if (a[i] == 4 && b[i] == 1) {
            n[i][0] = 1; n[i][1] = 2; n[i][2] = 3; n[i][3] = 4;
        }
        if (a[i] == 3 && b[i] == 2) {
            n[i][0] = 2; n[i][1] = 3; n[i][2] = 4; n[i][3] = 1;
        }
        if (a[i] == 3 && b[i] == 1) {
            n[i][3] = 4;
        }
        if (a[i] == 2 && b[i] == 1) {
            n[i][0] = 3; n[i][3] = 4; }
        // a[i] == 2 && b[i] == 2の場合、埋めるセルは存在しない
        if (a[i] == 2 && b[i] == 3) {
            n[i][0] = 1; n[i][1] = 4; n[i][2] = 3; n[i][3] = 2;
        }
        if (a[i] == 1 && b[i] == 2) {
            n[i][0] = 4; n[i][3] = 3;
        }
        if (a[i] == 1 && b[i] == 3) {
            n[i][0] = 4;
        }
        if (a[i] == 1 && b[i] == 4) {
            n[i][0] = 4; n[i][1] = 3; n[i][2] = 2; n[i][3] = 1;
        }
    }
}

void second_row_put(int a[LENGTH], int b[LENGTH])
{
}

void second_col_put(int a[LENGTH], int b[LENGTH])
{
}

void calc_row_fix_cell(void)
{
    int i, j;
    for (i = 0; i < LENGTH; i++) {
        if (row[i] == 4) continue;
        int cnt = 0;
        for (j = 0; j < LENGTH; j++) {
            if (n[i][j] > 0) {
                cnt++;
            }
        }
        row[i] = cnt;
    }
}

void calc_col_fix_cell(void)
{
    int i, j;
    for (j = 0; j < LENGTH; j++) {
        if (col[j] == 4) continue;
        int cnt = 0;
        for (i = 0; i < LENGTH; i++) {
            if (n[i][j] > 0) {
                cnt++;
            }
        }
        col[j] = cnt;
    }
}

void last_row_cell(int i)
{
    int j;
    int sum = 0;
    int pos;
    for (j = 0; j < LENGTH; j++) {
        if (n[i][j] == 0) {
            pos = j;
        }
        sum += n[i][j];
    }
    n[i][pos] = 10 - sum; 
}

void last_col_cell(int j)
{
    int i;
    int sum = 0;
    int pos;
    for (i = 0; i < LENGTH; i++) {
        if (n[i][j] == 0) {
            pos = i;
        }
        sum += n[i][j];
    }
    n[pos][j] = 10 - sum; 
}

void last_two_row_cell(int i)
{
    int j, k, l, first = 0, second = 0;
    int numbers[LENGTH] = { 1, 2, 3, 4};
    int padd[2]; // 既に確定している数値
    int zero[2]; // セルが0の状態で、そこに埋めることができる数値の候補
    /* 
     * 既に確定している数をpadd配列に格納し、
     * numbers配列の該当する箇所を0にする(3だったらインデックスの2)
     * また、numbers配列の0ではない数値をzero配列に格納する。
     */
    int cnt = 0;
    for (j = 0; j < LENGTH; j++) {
        if (n[i][j] > 0) {
            numbers[n[i][j] - 1] = 0;
        } else {
            if (cnt++ == 0) first = j;
            else second = j;
        }
    }
    cnt = 0;
    for (j = 0; j < LENGTH; j++) {
        if (padd[j] != 0) {
            zero[cnt++] = numbers[j];
        }
    }

    // 列の数字は確認済みなので、行の方向を走査する
    for (k = 0; k < LENGTH; k++) {
        // 自身のセル以外で同じ数字があればzeroの残りの値が答え
        // 自身の行iと比較行が異なる
        if (n[i][first] == 0 && i != k && zero[0] == n[k][first]) {
            n[i][first] = zero[1]; // 同一列の別行に同じ値があればzero[1]
            n[i][second] = zero[0];
        }
        if (n[i][first] == 0 && i != k && zero[1] == n[k][first]) {
            n[i][first] = zero[0]; // 同一列の別行に同じ値があればzero[0]
            n[i][second] = zero[1];
        }
        if (n[i][second] == 0 && i != k && zero[0] == n[k][second]) {
            n[i][second] = zero[1]; // 同一列の別行に同じ値があればzero[1]
            n[i][first] = zero[0];
        }
        if (n[i][second] == 0 && i != k && zero[1] == n[k][second]) {
            n[i][second] = zero[0]; // 同一列の別行に同じ値があればzero[0]
            n[i][first] = zero[1];
        }
    }
}

void last_two_col_cell(int j)
{
    int i, k, l, first = 0, second = 0;
    int numbers[LENGTH] = { 1, 2, 3, 4 };
    int padd[2]; // 既に確定している数値
    int zero[2]; // セルが0の状態で、そこに埋めることができる数値の候補
    /* 
     * 既に確定している数をpadd配列に格納し、
     * numbers配列の該当する箇所を0にする(3だったらインデックスの2)
     * また、numbers配列の0ではない数値をzero配列に格納する。
     */
    int cnt = 0;
    for (i = 0; i < LENGTH; i++) {
        if (n[i][j] > 0) {
            numbers[n[i][j] - 1] = 0;
        } else {
            if (cnt++ == 0) first = i;
            else second = i;
        }
    }
    cnt = 0;
    for (i = 0; i < LENGTH; i++) {
        if (padd[i] != 0) {
            zero[cnt++] = numbers[i];
        }
    }

    // 行の数字は確認済みなので、列の方向を走査する
    for (k = 0; k < LENGTH; k++) {
        // 自身のセル以外で同じ数字があればzeroの残りの値が答え
        // 自身の列iと比較列が異なる
        if (n[first][j] == 0 && j != k && zero[0] == n[k][first]) {
            n[first][j] = zero[1]; // 同一列の別行に同じ値があればzero[1]
            n[second][j] = zero[0];
        }
        if (n[first][j] == 0 && i != k && zero[1] == n[k][first]) {
            n[first][j] = zero[0]; // 同一列の別行に同じ値があればzero[0]
            n[second][j] = zero[1];
        }
        if (n[second][j] == 0 && j != k && zero[0] == n[k][second]) {
            n[second][j] = zero[1]; // 同一列の別行に同じ値があればzero[1]
            n[first][j] = zero[0];
        }
        if (n[second][j] == 0 && i != k && zero[1] == n[k][second]) {
            n[second][j] = zero[0]; // 同一列の別行に同じ値があればzero[0]
            n[first][j] = zero[1];
        }
    }
}

void last_padding(void)
{
    int i, row_cnt = 0;
    int first_val, second_val;
    int j, k, l, first = 0, second = 0;
    for (i = 0; i < 4; i++) {
        if (row[i] != 2) continue;
        if (row[i] == 2 && row_cnt++ == 0) {
            int numbers[LENGTH] = { 1, 2, 3, 4};
            int padd[2]; // 既に確定している数値
            int zero[2]; // セルが0の状態で、そこに埋めることができる数値の候補
            /* 
             * 既に確定している数をpadd配列に格納し、
             * numbers配列の該当する箇所を0にする(3だったらインデックスの2)
             * また、numbers配列の0ではない数値をzero配列に格納する。
             */
            int cnt = 0;
            for (j = 0; j < LENGTH; j++) {
                if (n[i][j] > 0) {
                    numbers[n[i][j] - 1] = 0;
                } else {
                    if (cnt++ == 0) first = j;
                    else second = j;
                }
            }
            cnt = 0;
            for (j = 0; j < LENGTH; j++) {
                if (padd[j] != 0) {
                    zero[cnt++] = numbers[j];
                }
            }
            n[i][first] = zero[0];
            n[i][second] = zero[1];
            first_val = zero[0];
            second_val = zero[1];
        } else if (row[i] == 2 && row_cnt != 0) {
            n[i][first] = second_val;
            n[i][second] = first_val;
        }
    }
}

int count_non_zero_cell(void)
{
    int i, cnt = 0;
    for (i = 0; i < 4; i++) {
        cnt += row[i];
    }
}

void put_number(int m[LENGTH][LENGTH])
{
    int i, j, total_count;
    first_row_put(m[0], m[1]);
    first_col_put(m[2], m[3]);

    int loop_count = 0;
    while(1) {
        for (i = 0; i < LENGTH; i++) {
            if (row[i] == 4) continue;
            switch(row[i]) {
                case 3:
                    last_row_cell(i);
                    break;
                case 2:
                    last_two_row_cell(i);
                    break;
                default:
                    ;
                    break;
            }
            calc_row_fix_cell();
            calc_col_fix_cell();
        }
        if (is_finished()) return;
        if (count_non_zero_cell() == 12) break;
        for (j = 0; j < LENGTH; j++) {
            if (col[j] == LENGTH) continue;
            switch(col[j]) {
                case 3:
                    last_col_cell(j);
                    break;
                case 2:
                    last_two_col_cell(j);
                    break;
                default:
                    break;
            }
            calc_row_fix_cell();
            calc_col_fix_cell();
        }
        if (is_finished()) return;
        if (count_non_zero_cell() == 12) break;
        loop_count++;
        if (loop_count >= 2) break;
    };
    last_padding();
}

// デバッグ用
void clear_array()
{
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            n[i][j] = 0;
        }
        row[i] = 0;
        col[i] = 0;
    }
}

int main(void)
{
    int i, j;
    int m[LENGTH][LENGTH] = {{ 3, 2, 1, 2 },{ 2, 1, 3, 2 },{ 3, 2, 1, 2 },{ 2, 1, 3, 2 }};
    // int m[LENGTH][LENGTH] = {{ 4, 3, 2, 1 }, { 1, 2, 2, 2 }, { 4, 3, 2, 1 }, { 1, 2, 2, 2, }};

    clock_t start, end;

    start = clock();

    for (i = 0; i < 1000000; i++) {
        clear_array();
        put_number(m);
    }

    print_array();

    end = clock();

    printf("CLOCKS_PER_SEC = %ld\n", CLOCKS_PER_SEC);
    printf("%.6f 秒\n", (double)(end - start) / CLOCKS_PER_SEC);
    printf("%ld micro sec\n", end - start);

    return 0;
}
