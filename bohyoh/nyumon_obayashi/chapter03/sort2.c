#include <stdio.h>

#define NUM 8

void sort1(int a[], int n)
{
    int i, j, temp;
    i = 0;
    while (i < NUM - 1) {
        j = NUM - 1;
        while (j > i) {
            if (a[j - 1] > a[j]) {
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
            j--;
        }
        i++;
    }
}
void print_array(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        printf("%4d\t", a[i]);
    }
    putchar('\n');
}

int main(void)
{
    int i, j, temp;
    int a[] = { 32, 47, 21, 100, 15, 20, 88, 58 };

    puts("--- sort前 ---");
    print_array(a, NUM);

    sort1(a, NUM);

    puts("--- sort後 ---");
    print_array(a, NUM);

    return 0;
}

