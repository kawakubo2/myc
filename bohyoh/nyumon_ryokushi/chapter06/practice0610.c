#include <stdio.h>

#define NUMBER 8

void intary_rcpy(int v1[], const int v2[], int n)
{
    int i, j = 0;
    for (i = n - 1; i >= 0; i--) {
        v1[j++] = v2[i];
    }
}

void print_array(const int v[], int n)
{
    int i;
    printf("{ ");
    for (i = 0; i < n; i++) {
        printf("%4d", v[i]);
    }
    printf(" }\n");
}

int main(void)
{
    int vx[8] = { 43, 23, 15, 18, 17, 38, 78, 24 };
    int vy[8];

    intary_rcpy(vy, vx, NUMBER);

    print_array(vx, NUMBER);
    print_array(vy, NUMBER);

    return 0;
}

