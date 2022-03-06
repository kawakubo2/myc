#include <stdio.h>

int main(void)
{
	int i, no;

	printf("正の整数を入力してください: ");
	scanf("%d", &no);

	puts("解法1");
	i = 2;
	while (i <= no) {
		printf("%d ", i);
		i += 2; // i = i + 2
	}
	printf("\n");

	puts("解法2");
	i = 1;
	while (i <= no) {
		if (i % 2 == 0) {
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");

	return 0;
}
