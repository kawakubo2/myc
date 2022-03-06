#include <stdio.h>

int main(void)
{
	int i, j;
	int rows, cols, tmp;
	puts("横長の長方形を作ります。");
	printf("一辺(その1): ");
	scanf("%d", &rows);	
	printf("一辺(その2): ");
	scanf("%d", &cols);	
	
	if (rows > cols) {
		tmp = rows;
		rows = cols;
		cols = tmp;
	}

	for (i = 1; i <= rows; i++) {
		for (j = 1; j <= cols; j++) {
			putchar('*');
		}
		putchar('\n');
	}

	return 0;
}
