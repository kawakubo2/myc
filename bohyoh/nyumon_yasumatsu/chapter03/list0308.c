#include <stdio.h>

int main(void)
{
	int num;
	int lowest_num;

	printf("整数を入力してください: ");
	scanf("%d", &num);

	lowest_num = num % 10;

	if (lowest_num == 5 || lowest_num == -5)
		puts("最下位の桁は5です。");
	else
		puts("最下位の桁は5ではありません。");

	return 0;
}
