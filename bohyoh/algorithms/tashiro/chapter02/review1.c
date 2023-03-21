#include <stdio.h>
void print_matrix(const char m[][8]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            putchar(m[i][j]);
        }
        putchar('\n');
    }
}
int main(void)
{
    char matrixA[][8] = {
        {'-', '*', '*', '*', '*', '*', '*', '-'},
        {'-', '*', '-', '-', '-', '-', '-', '-'},
        {'-', '*', '-', '-', '-', '-', '-', '-'},
        {'-', '*', '*', '*', '*', '-', '-', '-'},
        {'-', '*', '-', '-', '-', '-', '-', '-'},
        {'-', '*', '-', '-', '-', '-', '-', '-'},
        {'-', '*', '-', '-', '-', '-', '-', '-'},
        {'-', '*', '-', '-', '-', '-', '-', '-'},
    };

    print_matrix(matrixA);

    char matrixB[8][8];

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            matrixB[i][j] = matrixA[7 - j][i];
        }
    }
    print_matrix(matrixB);
}