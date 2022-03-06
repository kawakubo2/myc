#include <stdio.h>

int main(void)
{
	int i, n1, n2, sum = 0, tmp;

	puts("2つの整数を入力してください。");
	printf("整数1: ");
	scanf("%d", &n1);
	printf("整数2: ");
	scanf("%d", &n2);

	if (n1 > n2) {
		tmp = n1;
		n1 = n2;
		n2 = tmp;
	}
	
	i = n1;
	do {
		sum = sum + i;
		i++;

	} while (i <= n2); 

	printf("%d以上%d以下の全整数の和は%dです。\n", n1, n2, sum);

	return 0;
}
