#include <stdio.h>

int sumup(int n) 
{
    if (n == 1) return 1;
    return sumup(n - 1) + n;
}

int main(void)
{
    int n;
    printf("1からnまでの総和: ");
    fscanf(stdin, "%d", &n);
    printf("1から%dまでの総和: %d\n", n, sumup(n));
}