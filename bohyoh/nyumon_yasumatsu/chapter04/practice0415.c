#include <stdio.h>

int main(void)
{
	int i;

	for (i = 155; i <= 190; i += 5) {
		printf("%dcm %.2fkg\n", i, (i - 100) * 0.9);
	}

	return 0;
}
