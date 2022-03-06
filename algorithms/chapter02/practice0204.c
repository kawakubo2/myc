#include <stdio.h>
#define N 100
int convert(char numstr[N])
{
	int result = 0, i = 0;
	while (numstr[i] != ' ' && numstr[i] != '\n') {
		result = result * 10 + (numstr[i] - '0');
		i++;
	}
	return result;
}

int main(void)
{
	int result;
	char str[N];
	fgets(str, N, stdin);
	result = convert(str);
	printf("%d\n", result);
	
	return 0;
}
