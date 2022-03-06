#include <stdio.h>

int main(void)
{
	int x = 55;
	int *p = &x;
	/* 5*(*p)・・・つまりpの参照外し(55)と5をかける(*)ことになる */
	printf("%d\n", 5**p);

	return 0;
}
