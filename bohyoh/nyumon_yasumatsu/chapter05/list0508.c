#include <stdio.h>

int main(void)
{
	int i;
	int x[7];

	for (i = 0; i < 7; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	for (i = 0; i < 7 / 2; i++) {
		int temp = x[i];
		x[i] = x[7 - i - 1];
		x[7 - i - 1] = temp;
	}

	puts("反転しました。");

	for (i = 0; i < 7; i++) {
		printf("x[%d] = %d\n", i, x[i]);
	}	
	
	return 0;
}
