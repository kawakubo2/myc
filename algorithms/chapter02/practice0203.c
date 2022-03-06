#include <stdio.h>
#include <stdlib.h>

struct fraction {
	int numerator;
	int denominator;
};

int gcd(int u, int v)
{
	int t;
	while(u > 0) {
		if (u < v) { t = u; u = v; v = t; }
		u = u % v;
	}
	return v;
}
struct fraction *irreducible_fraction(struct fraction *s)
{
	int gcd_num;
	struct fraction *t;
	t = (struct fraction *)malloc(sizeof *t);
	gcd_num = gcd(s->numerator, s->denominator);
	t->numerator = s->numerator / gcd_num;
	t->denominator = s->denominator / gcd_num;
	return t;	
}

int main(void)
{
	int n1, n2;
	struct fraction *s, *result;
	s = (struct fraction *)malloc(sizeof *s);

	puts("二つの整数を入力してください。");
	printf("整数1: ");
	scanf("%d", &n1);
	printf("整数2: ");
	scanf("%d", &n2);

	s->numerator = n1;
	s->denominator = n2;

	result = irreducible_fraction(s);
	printf("%d/%dの既約分数は%d/%dです。\n", s->numerator, s->denominator, 
			result->numerator, result->denominator);	

	free(s);
	free(result);

	return 0;
}

	
