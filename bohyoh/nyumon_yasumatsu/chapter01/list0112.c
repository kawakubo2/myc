#include <stdio.h>

int main(void)
{
	int no;
	printf("Enter an integer: ");
	scanf("%d", &no);

	printf("%d times 5 is %d\n", no, 5 * no);

	return 0;
}
