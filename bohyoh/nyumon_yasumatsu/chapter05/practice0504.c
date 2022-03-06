#include <stdio.h>

int main(void)
{
	int i;
	int a[5] = { 17, 23, 36 };
	int b[5];
	int c[5];

	for (i = 0; i < 5; i++) {
		b[i] = a[5 - i - 1];
	}

	for (i = 4; i >= 0; i--) {
		c[5 - i - 1] = a[i];
	}

	puts("   a   b");
	puts("--------");
	for (i = 0; i < 5; i++) {
		printf("%4d%4d\n", a[i], b[i]);
	}

	puts("   a   c");
	puts("--------");
	for (i = 0; i < 5; i++) {
		printf("%4d%4d\n", a[i], c[i]);
	}
	return 0;
}
