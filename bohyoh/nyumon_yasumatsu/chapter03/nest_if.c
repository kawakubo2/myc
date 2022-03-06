#include <stdio.h>

int main(void)
{
	int age, gender;
	puts("xxx料金を計算します。");
	printf("性別を入力してください 1:男性 2:女性 : ");
	scanf("%d", &gender);
	printf("年齢を入力してください: ");
	scanf("%d", &age);

	if (gender == 1) {
		if (age <= 20) {
			puts("2400円です。");
		} else if (age <= 50) {
			puts("2800円です。");
		} else if (age <= 70) {
			puts("3200円です。");
		} else {
			puts("3600円です。");
		}
	} else {
		if (age <= 20) {
			puts("2200円です。");
		} else if (age <= 50) {
			puts("2400円です。");
		} else if (age <= 70) {
			puts("2600円です。");
		} else {
			puts("2800円です。");
		}
	}

	return 0;
}
