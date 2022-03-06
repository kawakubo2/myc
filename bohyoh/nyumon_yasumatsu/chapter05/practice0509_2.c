#include <stdio.h>

int main(void)
{
	int i, j;
	int bunpu[11] = { 0, 1, 0, 2, 5, 6, 3, 2, 1, 0, 1};
	int max = 0;

	for (i = 0; i < 11; i++) {
		if (bunpu[i] > max) {
			max = bunpu[i];
		}
	}

	puts("\n---分布グラフ---");
	for (i = max; i >= 1; i--) {
		for (j = 0; j < 11; j++) {
			if (bunpu[j] >= i) {
				printf("%3s", "*");
			} else {
				printf("%3s", "");
			}
		}
		putchar('\n');
	}
	for (i = 0; i < 11; i++) {
		printf("%3s", "---");
	}
	putchar('\n');
	for (i = 0; i < 10; i++) {
		printf("%3d", i * 10);
	}
	printf("%4d", 100);
	putchar('\n');
	

	return 0;	
}
