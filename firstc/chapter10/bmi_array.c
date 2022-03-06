#include <stdio.h>

double bmi(double w, double h)
{
	return w / (h * h);
}

void bmi_disp(double *w, double *h, int size)
{
	for (int i = 0; i < size; i++) {
		printf("%lf\n",bmi(w[i], h[i]));
	}
}

double input_weight(int i)
{
	double w;
	printf("%d人目の体重(kg):", i + 1); scanf("%lf", &w);
	return w;
}

double input_height(int i)
{
	double h;
	printf("%d人目の身長(m) :", i + 1); scanf("%lf", &h);
	return h;
}

int main(void) {
	int n;
	double w, h;
	puts("BMI計算プログラム");
	printf("人数を入力してください:"); scanf("%d", &n);
	int array[n];
	double weight[n];
	double height[n];
	for (int i = 0; i < n; i++) {
		weight[i] = input_weight(i);
		height[i] = input_height(i);		
	}
	bmi_disp(weight, height, n);

	return 0;
}
 
