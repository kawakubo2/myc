#include <stdio.h>

#define ROW 4
#define COL 3

int main(void)
{
	int i, j;
	int tensu1[ROW][COL] = {
		{ 91, 63, 78 },
		{ 67, 72, 46 },
		{ 89, 34, 53 },
		{ 32, 54, 34 },
	};
	int tensu2[ROW][COL] = {
		{ 97, 67, 82 },
		{ 73, 43, 46 },
		{ 97, 56, 21 },
		{ 85, 46, 35 }
	};
	int sum[ROW][COL];

	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			sum[i][j] = tensu1[i][j] + tensu2[i][j];
		}
	}

	puts("1回目の点数");
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			printf("%4d", tensu1[i][j]);
		}
		putchar('\n');
	}

	puts("2回目の点数");
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			printf("%4d", tensu2[i][j]);
		}
		putchar('\n');
	}

	puts("合計点");
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			printf("%4d", sum[i][j]);
		}
		putchar('\n');
	}

	return 0;
}
