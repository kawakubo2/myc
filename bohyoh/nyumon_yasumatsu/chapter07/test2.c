#include <stdio.h>

typedef struct student {
	int number;
	char *name;
} Student;

int mysum(int a[], int n)
{
	int i;
	int total = 0;
	for (i = 0; i < n; i++) {
		total += a[i];
	}
	return total;
}

/*
mysum2(int a[])
{
	int i;
	int total = 0;
	int n = sizeof a / sizeof a[0];
	for (int i = 0; i < n; i++) {
		total += a[i];
	}
	return total;
}
*/

int main()
{
	Student s;
	s.number = 101;
	s.name = "山田太郎";

	int nums[] = { 1, 2, 3, 4, 5, 6, 7, 8 };

	int answer = mysum(nums, sizeof nums / sizeof nums[0]);
	printf("配列numsの合計:%d\n", answer);
	/*
	int answer2 = mysum2(nums);
	printf("配列numsの合計:%d\n", answer2);
	*/

	printf("%sさんの学生番号は%dです。\n", s.name, s.number);

	printf("Student構造体のサイズ:%lu\n", sizeof s);
	printf("int型の配列numsのサイズ:%lu\n", sizeof nums);

	printf("配列numsの要素数は%lu\n", sizeof nums / sizeof nums[0]);

	return 0;
}
