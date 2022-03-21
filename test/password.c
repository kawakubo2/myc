#include <stdio.h>

int main(void)
{
	int pw = 1234;
	int input_pw;
	do {
		printf("パスワード: ");
		scanf("%d", &input_pw);
		if (input_pw != pw) {
			printf("パスワードが違います\n");
		} else {
			break;
		}
	} while (input_pw != pw);

	printf("ログイン！\n");

	return 1;
}

