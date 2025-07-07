#include <stdio.h>

int count_bits(unsigned char x) {
    int count = 0;
    unsigned char LSB1 = 1;
    while (x) {
        if (x & LSB1) count++;
        x >>= 1;
    }
    return count;
}

void print_bits(unsigned char x)
{
    unsigned char LSB0 = 0;
    int size = count_bits(~LSB0);
    printf("print_bitsのsize: %d\n", size);
    unsigned char LSB1 = 1;
    for (int i = size - 1; i >= 0; i--) {
        if (x >> i & LSB1) {
            putchar('1');
        } else {
            putchar('0');
        } 
    }
    putchar('\n');
}

int count0bits(unsigned char x)
{
    int count = 0;
    unsigned char LSB0 = 0;
    unsigned char LSB1 = 1;
    int size = count_bits(~LSB0);
    printf("size: %d\n", size);
    for (int i = size - 1; i >= 0; i--) {
        if (((x >> i) & LSB1) == 0) count++;
    }
    return count;
}

int main(void)
{
    unsigned char x;
    printf("符号なし8ビット整数: ");
    scanf("%hhu", &x);
    print_bits(x);
    int count = count0bits(x);
    printf("%uの0の個数: %d\n", x, count);
    return 0;
}