#include <stdio.h>

void put_count()
{
	static int count = 0;
	printf("put_count : %d回目\n", ++count);
}

int main(void)
{
	int i;

	for (i = 0; i < 30; i++) {
		put_count();
	}

	return 0;
}
