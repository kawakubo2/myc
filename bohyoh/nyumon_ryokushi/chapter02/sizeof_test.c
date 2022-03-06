#include <stdio.h>

int main(void)
{
    char c;
    short s;
    int i;
    long l;
    long long ll;

    printf("char: %zu short: %zu int: %zu long: %zu, long long: %zu\n",
            sizeof(c), sizeof(s), sizeof(i), sizeof(l), sizeof(ll));

    return 0;
}
