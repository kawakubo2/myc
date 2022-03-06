#include <stdio.h>

int main(void)
{
	int no, temp;

	printf("正の整数を入力してください: ");
	scanf("%d", &no);

	temp = no;

	while(no >= 1) {
		printf("%d ", no--);
	}
	if (temp > 0) {
		printf("\n");
	}
	
	return 0;
}
