#include <stdio.h>

int main(void)
{
	int i;
	char c;
	for (c = 'A'; c <= 'Z'; c++) {
		printf("%c: %d\n", c, (int)c);
	}

	for (i = 12449; i <= 12531; i++) {
		printf("%c: %d\n", (char)i, i);
	}

		
	return 0;
}
