#include <stdio.h>

int main(void)
{
	int i, j;
	int height, width;

	puts("長方形を作ります。");
	printf("高さ: ");
	scanf("%d", &height);
	printf("横幅: ");
	scanf("%d", &width);

	for (i = 1; i <= height * width; i++) {
		putchar('*');
		if (i % width == 0) {
			putchar('\n');
		}
	}

	return 0;
}
