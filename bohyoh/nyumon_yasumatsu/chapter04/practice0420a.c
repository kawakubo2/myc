#include <stdio.h>

int main(void)
{
	int i, j;

	// 列見出し
	printf("   |");
	for (i = 1; i <= 9; i++) {
		printf("%3d |", i);
	}
	putchar('\n');

	// 列見出しと九九本体との区切り線
	printf("===+");
	for (i = 1; i <= 9; i++) {
		printf("====+");
	}
	putchar('\n');

	for (i = 1; i <= 9; i++) {
		printf(" %d ]", i);
		for (j = 1; j <= 9; j++) {
			printf("%3d |", i * j);
		}
		putchar('\n');
		printf("---+");
		for (j = 1; j <= 9; j++) {
			printf("----+");
		}
		putchar('\n');
	}
	return 0;
}
