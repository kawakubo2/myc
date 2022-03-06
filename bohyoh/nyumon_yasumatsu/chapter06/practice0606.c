#include <stdio.h>

void alert(int n)
{
	while(n-- > 0)
		putchar('\a');
}

int main(void)
{
	int n;
	puts("指定した回数ビープ音を鳴らします。");
	printf("回数: ");
	scanf("%d", &n);

	alert(n);

	return 0;
}
