#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	for (i = 0;  i <= 100; i++) {
		sum += i;
	}
	printf("1から100までの合計は%dです。\n", sum);

	return 0;
}


