#include <stdio.h>

int main(void)
{
	int no;

	puts("整数値を入力してください。");
	scanf("%d", &no);

	printf("2で割った余りは%dです。\n", no % 2);

	switch(no % 2) {
		case 0:
			puts("その数は偶数です。");
			break;
		case -1:
		case 1:
			puts("その数は奇数です。");
			break;
	}

	switch(no % 2) {
		case 0:
			puts("その数は偶数です。");
			break;
		default:
			puts("その数は奇数です。");
			break;
	}

	return 0;
}
