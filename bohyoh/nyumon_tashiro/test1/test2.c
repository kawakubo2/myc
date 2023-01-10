#include <stdio.h>

int price = 100;
void a()
{
    printf("%d\n", price);
}
void b()
{
    int price = 2000;
    printf("%d\n", price);
}
int main()
{
    a();
    b();
    return 0;
}