#include <stdio.h>

/*
整数値を逆転させる
*/

int main(void)
{
	int n = 3857;
	printf("%dを逆転させる\n", n);
	int result = 0;
	int temp;
	while (n > 0) {
		temp = n % 10;
		result = result * 10 + temp;
		n = n / 10;
	}
	printf("%d\n", result);

	return 0;
}
	
