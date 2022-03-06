#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define N 128

static int stack[N + 1];
static int p;
void stack_init()
{
	p = 0;
}

void push(int v)
{
	stack[p++] = v;
}

int pop()
{
	return stack[--p];
}

int stack_empty() {
	return !p;
}

void infix2postfix(char str[], char result[]) 
{
	char c;

	int x, i = 0, idx = 0;

	stack_init();

	while(1) {
		c = str[i++];
		if (c == ' ') continue;
		if (c == '\n') break;
		if (c == ')') result[idx++] = (char)pop(); 
		if (c == '+') push(c);
		if (c == '*') push(c);
		while(c >= '0' && c <= '9') {
			result[idx++] = c;
			c = str[i++];
			if (c < '0' || c > '9') i--;
		}
		if (c != '(') result[idx++] = ' '; 
	}
	result[idx++] = '\0';
}

int calc(char postfix[])
{
	int i = 0;
	char c;
	int x;

	stack_init();

	while(1) {
		x = 0;
		c = postfix[i++];
		if (c == '\0') break;
		if (c == ' ') continue;
		if (c == '+') x = pop() + pop();
		if (c == '*') x = pop() * pop();
		while(c >= '0' && c <= '9') {
			x = 10 * x + (c - '0');
			c = postfix[i++];
			if (c < '0' || c > '9') i--;
		}
		push(x);
	}		
	return pop();

}

int main(void)
{
	char str[N];
	char postfix[N];
	fgets(str, N, stdin);
	infix2postfix(str, postfix);
	printf("%s\n", postfix);
	printf("計算結果:%d\n", calc(postfix));

	return 0;

}
