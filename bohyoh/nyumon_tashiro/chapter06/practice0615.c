#include <stdio.h>

void put_count(void)
{
    static int n = 1;
    printf("put_count: %d\n", n++);
}

int main(void) 
{
    int i;
    for (i = 0; i < 3; i++) {
        put_count();
    }
    return 0;
}