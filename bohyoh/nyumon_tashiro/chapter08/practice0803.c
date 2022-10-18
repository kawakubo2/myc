#include <stdio.h>

#define swap(type, a, b) ({type tmp = a; a = b; b = tmp;})

int main(void)
{
int n1, n2;
    double x1, x2;
    printf("整数1を入力してください: ");
    fscanf(stdin, "%d", &n1);
    printf("整数2を入力してください: ");
    fscanf(stdin, "%d", &n2);
    printf("n1 = %d, n2 = %d\n", n1, n2);
    swap(int, n1, n2);
    printf("n1 = %d, n2 = %d\n", n1, n2);

    printf("実数1を入力してください: ");
    fscanf(stdin, "%lf", &x1);
    printf("実数2を入力してください: ");
    fscanf(stdin, "%lf", &x2);
    printf("x1 = %f, x2 = %f\n", x1, x2);
    swap(double, x1, x2);
    printf("x1 = %f, x2 = %f\n", x1, x2);

    if (x1 > x2) 
        swap(double, x1, x2);
    else
        swap(double, x1, x2);
    
    printf("x1 = %f, x2 = %f\n", x1, x2);


    return 0;
}