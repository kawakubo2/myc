#include <stdio.h>
#include <stdlib.h>

#define N 128

struct node {
	int key;
	struct node *next;
};

struct node *head, *z, *t;

void stack_init()
{
	head = (struct node *)malloc(sizeof *head);
	z = (struct node *)malloc(sizeof *z);
	head->next = z;
	head->key = 0;
	z->next = z;
}

void push(int v)
{
	t = (struct node *)malloc(sizeof *t);
	t->key = v;
	t->next = head->next;
	head->next = t;
}

int pop()
{
	int x;
	t = head->next;
	head->next = t->next;
	x = t->key;
	free(t);
	return x;
}

int stack_empty() {
	return head->next == z;
}

int main(void)
{
	char c;
	char str[N];

	int x, i = 0;

	stack_init();

	fgets(str, N, stdin);
	while(1) {
		c = str[i++];
		if (c == ' ') continue;
		if (c == '\n') break;
		if (c == ')') printf("%1c", (char)pop()); 
		if (c == '+') push((int)c);
		if (c == '*') push((int)c);
		while(c >= '0' && c <= '9') {
			printf("%1c", c);
			c = str[i++];
			if (c < '0' || c > '9') i--;
		}
		if (c != '(') printf(" "); 
	}

	putchar('\n');

	return 0;
}
