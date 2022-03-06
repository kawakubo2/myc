#include <stdio.h>

int main(void)
{
	int i, no;

	printf("正の整数: ");
	scanf("%d", &no);

	for (i = 1; i <= no; i++) {
		putchar('*');
	}
	putchar('\n');

	for (i = 0; i < no; i++) {
		putchar('*');
	}
	putchar('\n');

	return 0;
}
