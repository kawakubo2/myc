#include <stdio.h>

typedef struct {
	char name[20];
	double weight;
	double height;
} Member;

double bmi(double weight, double height)
{
	return weight / ((height / 100) * (height / 100));
}
int main(void)
{
	Member members[3] = {
		{ "Taro Yamada", 78, 172 },
		{ "Hanako Yokoyama", 58, 158 },
		{ "Ichiro Tanaka", 88, 180 }
	};
	for (int i = 0; i < 3; i++) {
		printf("%-15s %.2f\n", members[i].name, bmi(members[i].weight, members[i].height));
	}
	return 0;

}

