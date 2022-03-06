#include <stdio.h>

int main(void)
{
	int i, no, temp;
	printf("正の整数を入力してください: ");
	scanf("%d", &no);

	temp = no;

	i = 1;
	while (i <= no) {
		printf("%d ", i++);
	};
	if (temp > 0) {
		printf("\n");
	}
	
	return 0;
}
