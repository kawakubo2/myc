#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int age;
	char *name;
	age = atoi(argv[1]);
	name = argv[2];
	
	printf("%sさんの年齢は%d歳です。\n", name, age);

	return 0;
}
