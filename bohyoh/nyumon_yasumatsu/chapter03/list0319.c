#include <stdio.h>

int main(void)
{
	int no;
	printf("整数を入力してください: ");
	scanf("%d", &no);

	switch(no % 3) {
		case -2: puts("その数は3で割った余りは-2です。"); break;
		case -1: puts("その数は3で割った余りは-1です。"); break;
		case 0: puts("その数は3で割り切れます。"); break;
		case 1: puts("その数を3で割った余りは1です。"); break;
		case 2: puts("その数を3で割った余りは2です。"); break;
	}

	return 0;
}
