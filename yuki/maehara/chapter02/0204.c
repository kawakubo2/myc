#include <stdio.h>

int main(void);
int main(void)
{
    printf("12345678\n");
    printf("--------\n");
    printf("%8d\n", -100);
    printf("%8d\n", 1200);
    printf("%08d\n", 35);
    printf("%8d\n", 4);

    printf("%-8d\n", 1234);
    
    printf("%+8d\n", 123456789);
    // %s --- String(文字列型) char []
    printf("%s\n", "Hello, C language!");

    return 0;
}