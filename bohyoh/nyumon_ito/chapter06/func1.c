#include <stdio.h>

int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int mul(int a, int b) {
    return a * b;
}
int main(void)
{
    int x = 5;
    int y = 3;
    int z = 6;
    // (x + y) * (x - y) + z
    int answer = add(mul(add(x, y), sub(x, y)), z);
    printf("(%d + %d) * (%d - %d) + %d = %d\n", x, y, x, y, z, answer);
    return 0;
}