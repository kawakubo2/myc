#include <stdio.h>

int main(void)
{
	double upper_base = 78.14145;  // 上底
	double lower_base = 26.656135; // 下底
	double height     = 53.423;    // 高さ	
	
	double area = (upper_base + lower_base) * height / 2;

	printf("上底が%.1fcm、下底が%.1fcm、高さが%.1fcmの台形の面積は%.1f平方cmです。\n",
		upper_base, lower_base, height , area);

	printf("上底:%.8f\n", upper_base);
	printf("下底:%.8f\n", lower_base);
	printf("高さ:%.8f\n", height);
	printf("面積:%.8f\n", area);

	return 0;
}
