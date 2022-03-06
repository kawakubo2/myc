#include <stdio.h>

int main(void)
{
	double upper_base, lower_base, height;
	puts("台形の面積を計算します。");
	
	printf("上底を入力してください: ");
	scanf("%lf", &upper_base);

	printf("下底を入力してください: ");
	scanf("%lf", &lower_base);

	printf("高さを入力してください: ");
	scanf("%lf", &height);

	printf("上底が%.2fcm, 下底が%.2fcm、高さが%.2fcmの台形の面積は%.2f平方cmです。\n", upper_base, lower_base, height, (upper_base + lower_base) * height / 2);

	return 0;

}
