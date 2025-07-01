#include <stdio.h>

/*
10進数を2進数から36進数として表示
*/
void print_cardinality(unsigned x, unsigned card)
{
    unsigned result[100] = {0};
    char s[] = "0123456789abcdefghijklmnopqrstuvwxyz";
    int length = 0;
    while (x > 0) {
        result[length++] = x % card;
        x /= card;
    }
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", s[result[i]]);
    }
    putchar('\n');
}

int main(void) 
{
    unsigned x;
    unsigned n;
    do {
        printf("整数(2-36): ");
        scanf("%u", &n);
    } while(n < 2 || n > 36);

    printf("0より大きい整数: ");
    scanf("%u", &x);
    
    print_cardinality(x, n);

    return 0;
}