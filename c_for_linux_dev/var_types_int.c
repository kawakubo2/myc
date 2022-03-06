#include <stdio.h>

int main(void)
{
    char c;
    short s;
    int i;
    long l;
    long long ll;
    void *pv;
    int *pi;
    long *pl;

    printf("char %zu short %zu int %zu long %zu long long %zu\n",
            sizeof(c), sizeof(s), sizeof(i), sizeof(l), sizeof(ll));

    printf("void* %zu int* %zu, long* %zu\n", sizeof(pv), sizeof(pi), sizeof(pl));

    return 0;
}

