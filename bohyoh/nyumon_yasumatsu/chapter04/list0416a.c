#include <stdio.h>

int main(void)
{
	int i, j, seki, cnt = 0;

	for (i = 1; i <= 99; i++) {
		for (j = 1; j <= 99; j++) {
			seki = i * j;
			if (seki > 300) {
				break;
			}
			printf("%5d", seki);
			cnt++;
		}
		putchar('\n');
	}
	printf("繰返し回数: %d\n", cnt);

	return 0;
}
