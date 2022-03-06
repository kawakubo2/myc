#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int n[4][4];
int row[4];
int col[4];

void print_array(int n[4][4])
{
    puts("--------");
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%2d", n[i][j]);
        }
        putchar('\n');
    }
}

void put_number(int a[4], char d)
{
    int i, j;
    switch(d) {
        case 'n':
            for (j = 0; j < 4; j++) {
                if (a[j] == 4) {
                    for (i = 0; i < 4; i++) {
                        n[i][j] = i + 1;
                    }
                } 
                if (a[j] == 1) {
                    n[0][j] = 4;
                }
                if (a[j] == 2) {
                    if (n[2][j] == 4 || n[3][j] == 4) {
                        n[0][j] = 3;
                    }
                }
                if (a[j] == 3) {
                    if (n[2][j] == 4) {
                        n[0][j] = 2;
                        n[1][j] = 3;
                        n[3][j] = 1;
                    }
                    // パターン2のテストの際はコメントアウトすること
                    if (n[0][j] == 2) {
                        n[1][j] = 3;
                        n[2][j] = 4;
                    }
                    
                }
            }
            break;
        case 's':
            for (j = 0; j < 4; j++) {
                if (a[j] == 4) {
                    for (i = 4 - 1; i >= 0; i--) {
                        n[i][j] = i + 1;
                    }
                }
                if (a[j] == 1) {
                    n[3][j] = 4;
                }
                if (a[j] == 2) {
                    if (n[1][j] == 4 || n[0][j] == 4) {
                        n[j][3] = 3;
                    }
                }
                if (a[j] == 3) {
                    if (n[1][j] == 4) {
                        n[2][j] = 3;
                        n[3][j] = 2;
                        n[0][j] = 1;
                    }
                    // パターン2のテストの際はコメントアウトすること
                    if (n[3][j] == 2) {
                        n[2][j] = 3;
                        n[1][j] = 4;
                    }
                }
            }
            break;
        case 'w':
            for (i = 0; i < 4; i++) {
                if (a[i] == 4) {
                    for (j = 0; j < 4; j++) {
                        n[i][j] = j + 1;
                    }
                }
                if (a[i] == 1) {
                    n[i][0] = 4;
                }
                if (a[i] == 2) {
                    if (n[i][2] == 4 || n[i][3] == 4) {
                        n[i][0] = 3;
                    }
                }
                if (a[i] == 3) {
                    if (n[i][2] == 4) {
                        n[i][0] = 2;
                        n[i][1] = 3;
                        n[i][3] = 1;
                    }
                    // パターン2のテストの際はコメントアウトすること
                    if (n[i][0] == 2) {
                        n[i][1] = 3;
                        n[i][2] = 4;
                    }
                }
            }
            break;
        case 'e':
            for (i = 0; i < 4; i++) {
                if (a[i] == 4) {
                    for (j = 4 - 1; j >= 0; j--) {
                        n[i][j] = 4 - j;
                    }
                }
                if (a[i] == 1) {
                    n[i][3] = 4;
                }
                if (a[i] == 2) {
                    if (n[i][1] == 4 || n[i][0] == 4) {
                        n[i][3] = 3;
                    }
                }
                if (a[i] == 3) {
                    if (n[i][1] == 4) {
                        n[i][2] = 3;
                        n[i][3] = 2;
                        n[i][0] = 1;
                    }
                    // パターン2のテストの際はコメントアウトすること
                    if (n[i][3] == 2) {
                        n[i][2] = 3;
                        n[i][1] = 4;
                    }
                }
            }
            break;
    }
}
int calc_row_fix_cell(void)
{
    int i, j;
    for (i = 0; i < 4; i++) {
        int cnt = 0;
        for (j = 0; j < 4; j++) {
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
    for (j = 0; j < 4; j++) {
        int cnt = 0;
        for (i = 0; i < 4; i++) {
            if (n[i][j] > 0) {
                cnt++;
            }
        }
        col[j] = cnt;
    }
}

void put_number_last_row_cell(int i)
{
    int j;
    for (j = 0; j < 4; j++) {
        int sum = 0;
        int pos;
        for (j = 0; j < 4; j++) {
            if (n[i][j] == 0) {
                pos = j;
            }
            sum += n[i][j];
        }
        n[i][pos] = 10 - sum; 
    }
}

void put_number_last_col_cell(int j)
{
    int i;
    int sum = 0;
    int pos;
    for (i = 0; i < 4; i++) {
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
    int padd[4] = { 1, 2, 3, 4 };
    int zero[2];
    int cnt = 0;
    for (j = 0; j < 4; j++) {
        for (k = 0; k < 4; k++) {
            if (n[i][j] == padd[k]) {
                padd[k] = 0;
            }
        }
    }
    cnt = 0;
    for (j = 0; j < 4; j++) {
        if (n[i][j] != 0) {
            zero[cnt++] = n[i][j];    
        }
    }
    
    for (k = 0; k < 4; k++) {
        // 自身のセル以外で同じ数字があればzeroの残りの値が答え
        // 自身の行iと比較行が異なる
        if (i != k && zero[0] == n[i][k]) {
            n[i][first] = zero[1]; // 同一列の別行に同じ値があればzero[1]
            n[i][second] = zero[0];
        }
        if (n[i][first] == 0 && i != k && zero[1] == n[i][k]) {
            n[i][first] = zero[0]; // 同一列の別行に同じ値があればzero[1]
            n[i][second] = zero[1];
        }
    }
}

void last_two_col_cell(int j)
{
    int i, k, l, first = 0, second = 0;
    int padd[4] = { 1, 2, 3, 4 };
    int zero[2];
    int cnt = 0;
    for (i = 0; i < 4; i++) {
        for (k = 0; k < 4; k++) {
            if (n[i][j] == padd[k]) {
                padd[k] = 0;
            }
        }
    }
    cnt = 0;
    for (i = 0; i < 4; i++) {
        if (n[i][j] != 0) {
            zero[cnt++] = n[i][j];    
        }
    }
    
    for (k = 0; k < 4; k++) {
        // 自身のセル以外で同じ数字があればzeroの残りの値が答え
        // 自身の列iと比較列が異なる
        if (j != k && zero[0] == n[j][k]) {
            n[first][j] = zero[1]; // 同一列の別行に同じ値があればzero[1]
            n[second][j] = zero[0];
        }
        if (n[first][j] == 0 && j != k && zero[1] == n[j][k]) {
            n[first][j] = zero[0]; // 同一列の別行に同じ値があればzero[1]
            n[second][j] = zero[1];
        }
    }
}

// デバッグ用
void print_row()
{
    int i;
    puts("--< row >---");
    for (i = 0; i < 4; i++) {
        printf("%2d,", row[i]);
    }
    putchar('\n');
}

// デバッグ用
void print_col()
{
    int i;
    puts("--< col >---");
    puts("------------");
    for (i = 0; i < 4; i++) {
        printf("%2d,", col[i]);
    }
    putchar('\n');
}

void possible_number()
{
    int i, j;
    for (i = 0; i < 4; i++) {
        switch(row[i]) {
            case 3:
                put_number_last_row_cell(i);
                break;
            case 2:
                last_two_row_cell(i);
                break;
            default:
                ;
                break;
        }
        calc_row_fix_cell();
        print_row();
        calc_col_fix_cell();
        print_col();
    }
    for (j = 0; j < 4; j++) {
        switch(col[i]) {
            case 3:
                put_number_last_col_cell(j);
                break;
            case 2:
                last_two_col_cell(j);
                break;
            default:
                break;
        }
        calc_row_fix_cell();
        print_row();
        calc_col_fix_cell();
        print_col();
    }
}


int main(void)
{
    int i;
    // int m[4][4] = {{ 3, 2, 1, 2 },{ 2, 1, 3, 2 },{ 3, 2, 1, 2 },{ 2, 1, 3, 2 }};
    int m[4][4] = {{ 4, 3, 2, 1 }, { 1, 2, 2, 2 }, { 4, 3, 2, 1 }, { 1, 2, 2, 2, }};
    char direct[] = { 'n', 's', 'w', 'e' };
    clock_t start, end;

    start = clock();

    print_array(n);

    for (i = 0; i < 4; i++) {
        put_number(m[i], direct[i]);
    }
    for (i = 0; i < 4; i++) {
        put_number(m[i], direct[i]);
    }
    for (i = 0; i < 4; i++) {
        put_number(m[i], direct[i]);
    }
    for (i = 0; i < 4; i++) {
        put_number(m[i], direct[i]);
    }

    
    possible_number();
    possible_number();
    calc_row_fix_cell();
    calc_col_fix_cell();

    print_array(n);

    end = clock();

    printf("%.6f 秒\n", (double)(end - start) / CLOCKS_PER_SEC);

    return 0;
}
