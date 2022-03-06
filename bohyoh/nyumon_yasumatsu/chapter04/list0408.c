#include <stdio.h>

int main(void)
{
	int no;

	printf("正の整数を入力してください: ");
	scanf("%d", &no);

	while(no -- > 0) {
		printf("*");
	}
	printf("\n");

	return 0;
}
