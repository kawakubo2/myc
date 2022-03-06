#include <stdio.h>

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 10; i++) {
		int x = 5;
		printf("%d * %d = %d\n", i, x, (i * x));
		{
			int y = 3;
			printf("%d\n", y);
		}		
	}	

	return 0;

}
