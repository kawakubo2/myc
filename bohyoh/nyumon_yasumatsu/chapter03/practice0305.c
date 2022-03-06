#include <stdio.h>

int main(void)
{
	int n1 = 8;
	int n2 = 3;

	printf("%d == %d ---> %d(検出値) 0(予測値)\n", n1, n2, n1 == n2);
	printf("%d != %d ---> %d(検出値) 1(予測値)\n", n1, n2, n1 != n2);
	printf("%d <  %d ---> %d(検出値) 0(予測値)\n", n1, n2, n1 <  n2);
	printf("%d <= %d ---> %d(検出値) 0(予測値)\n", n1, n2, n1 <= n2);
	printf("%d >  %d ---> %d(検出値) 1(予測値)\n", n1, n2, n1 >  n2);
	printf("%d >= %d ---> %d(検出値) 1(予測値)\n", n1, n2, n1 >= n2);

	return 0;
}
