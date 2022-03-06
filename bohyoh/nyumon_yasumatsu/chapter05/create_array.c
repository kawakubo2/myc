#include <stdio.h>

int main(void)
{
	int i;
	puts("配列の作り方1");
	int n1[5]; // 配列変数の宣言と領域の確保
	n1[0] = 0; // 代入
	n1[1] = 1;
	n1[2] = 2;
	n1[3] = 3;
	n1[4] = 4;
	for (i = 0; i < 5; i++) {
		printf("%d ", n1[i]);
	}
	putchar('\n'); 

	puts("配列の作り方2");
	int n2[5] = { 10, 11, 12, 13, 14 };
	for (i = 0; i < 5; i++) {
		printf("%d ", n2[i]);
	}
	putchar('\n'); 

	puts("配列の作り方3");
	int n3[] = { 20, 21, 22, 23, 24 };
	for (i = 0; i < 5; i++) {
		printf("%d ", n3[i]);
	}
	putchar('\n'); 
	
	return 0;
}
