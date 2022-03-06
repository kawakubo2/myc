#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[20] = "abcde";
    char b[20] = "fghijkolm";
    printf("%sに%sを連結すると", a, b);
    strcat(a, b);
    printf("a:%s\n", a);
    printf("b:%s\n", b);
    
    char c[20] = "0123456789";
    printf("%sに%sの5文字を連結すると", c, b);
    strncat(c, b, 5);
    printf("c:%s\n", c);
    printf("b;%s\n", b);
    return 0;
}

    
