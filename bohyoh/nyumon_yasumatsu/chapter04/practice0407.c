#include <stdio.h>

int main(void)
{
	int no, i;

	printf("正の整数を入力してください: ");
	scanf("%d", &no);
	i = 2;
	while (i <= no) {
		printf("%d ", i);
		i *= 2; // i = i * 2;
	}
	printf("\n");

	return 0;
}
