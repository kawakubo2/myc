#include <stdio.h>

void put_stars(int n)
{
	int i;
	for (i = 0; i < n; i++) {
		putchar('*');
	}
}

int main(void)
{
	int i,j, len;
	printf("左下直角二等辺三角形を作ります。\n");
	printf("短辺: ");
	scanf("%d", &len);

	for (i = 1; i <= len; i++) {
		put_stars(i);
		putchar('\n');
	}

	return 0;
}
