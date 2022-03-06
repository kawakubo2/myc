#include <stdio.h>

int main(void)
{
	int no;

	printf("整数を入力してください: ");
	scanf("%d", &no);

	if (no >= 0) {
		printf("絶対値は%dです。\n", no);
	} else {
		printf("絶対値は%dです。\n", -no);
	}
		
	return 0;
}
