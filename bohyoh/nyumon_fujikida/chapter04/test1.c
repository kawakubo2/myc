#include <stdio.h>

int main(void)
{
    int n = 10;
    printf("n : %d\n", n);
    /*
     * 複合代入演算子
     * +=
     * -=
     * *=
     * /=
     * %=
     */
    n += 5; // n = n + 5;
    printf("n += 5\n"); // 10 += 5 ---> 15
    printf("n : %d\n", n);

    printf("n -= 10\n"); // 15 -= 10 ---> 5
    n -= 10;
    printf("n : %d\n", n);

    printf("n *= 3\n"); // 5 *= 3 ---> 15
    n *= 3;
    printf("n : %d\n", n);

    printf("n /= 5\n"); // 15 /= 5 ---> 3
    n /= 5;
    printf("n : %d\n", n);

    printf("n += 1\n"); // 3 += 1 ---> 4
    n += 1;
    printf("n : %d\n", n);

    printf("n++\n"); // n = n + 1
    n++;
    printf("n : %d\n", n);

    printf("n--\n"); // n = n - 1;
    n--;
    printf("n : %d\n", n);

    return 0;
}


