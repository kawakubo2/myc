#include <stdio.h>

#define N 16

int gcd(int u, int v)
{
	int t;
	while(u > 0) {
		if (u < v) { t = u; u = v; v = t; }
		u = u % v;
	}
	return v;
}
void print_separator() {
	int j;
	printf("+");
	for(j = 0; j <= N; j++) {
		printf("---+");
	}
	printf("\n");
}
void print_array(int a[N + 1][N + 1]) {
	int i, j;
	print_separator();
	printf("|   |");
	for (j = 1; j <= N; j++) {
		printf("%3d|", j);
	}
	printf("\n");
	print_separator();
	for (i = 1; i <= N; i++) {
		printf("|%3d|", i);
		for (j = 1; j <= N; j++) {
			printf("%3d|", a[i][j]);
		}
		printf("\n");
		print_separator();
	}
}

int main(void)
{
	int i, j;
	int a[N + 1][N + 1] = {0};
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			a[i][j] = gcd(i, j) == 1 ? 1: 0;
		}
		putchar('\n');
	}
	
	print_array(a);

	return 0;
}
