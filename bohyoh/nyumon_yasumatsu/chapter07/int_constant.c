#include <stdio.h>

int main(void)
{
	int int1 = 1000;
	long long1 = int1;
	printf("long1=%ld\n", long1);

	int int2 = long1;
	printf("int2=%d\n", int2);

	double double1 = 123.4567;

	int int3 = double1;
	printf("int3=%d\n",int3);

	printf("%ld\n", 10000000000L);

	return 0;

}
