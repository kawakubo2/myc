#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct node {
	char info;
	struct node *l, *r;
};
struct node *stack[MAX + 1];
struct node *z;
int p;

void stack_init() 
{
	p = 0;
	z = (struct node *)malloc(sizeof *z);
	z->l = z; z->r = z;
}
void push(struct node *v)
{
	stack[p++] = v;
}

struct node *pop()
{
	return stack[--p];
}

int stack_empty() 
{
	return p == 0;
}

void visit(struct node *t)
{
	printf("%c ", t->info);
}

void traverse(struct node *t)
{
	push(t);
	while (!stack_empty()) {
		t = pop();
		visit(t);
		if (t->r != z) push(t->r);
		if (t->l != z) push(t->l);
	}
}		

int main(void)
{
	struct node *x;
	int i = 0;
	char c;
	char str[256];
	
	stack_init();
	
	fgets(str, 256, stdin);

	for (i = 0; str[i] != '\n' && i < 256; i++) {
		c = str[i];
		if (c == ' ') continue;
		x = (struct node *)malloc(sizeof *x);
		x->info = c; x->l = z; x->r = z;
		if (c == '+' || c == '*') {
			x->r = pop();
			x->l = pop();
		}
		push(x);
	}
		
	puts("treeを先行順に走査");

	traverse(pop());
	putchar('\n');

	return 0;
}

