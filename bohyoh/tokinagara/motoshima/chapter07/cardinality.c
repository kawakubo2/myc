#include <stdio.h>

void print_hex(unsigned x)
{
    unsigned result[100] = {0};
    char s[] = "0123456789ABCDEF";
    int length = 0;
    while (x > 0) {
        result[length++] = x % 16;
        x /= 16;
    }
    printf("0x");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", s[result[i]]);
    }
    putchar('\n');
}

int main(void) 
{
    unsigned n;
    printf("正の整数: ");
    scanf("%u", &n);
    print_hex(n);

    return 0;
}