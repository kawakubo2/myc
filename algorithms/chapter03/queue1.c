#include <stdio.h>

#define MAX 8
#define N 128

static int queue[MAX + 1], head, tail;

void put(int v)
{
	queue[tail++] = v;
	if (tail > MAX) tail = 0;
}

int get()
{
	int t = queue[head++];
	if (head > MAX) head = 0;
	return t;
}

void queue_init()
{
	head = tail = 0;
}

int queue_empty()
{
	return head == tail;
}

int queue_full()
{
	return (tail + 1) % MAX == head;
}

void print_queue()
{
	int i;
	for (i = 0; i <= MAX; i++) {
		if (i == head) printf("%c", 'h');
		else if (i == tail) printf("%c", 't');
		else printf("-");
	}
	putchar('\n');
	if (head > tail) {
		for (i = 0; i < tail; i++) printf("%c", queue[i]);
		for (i = tail; i < head; i++) printf(" ");
		for (i = head; i <= MAX; i++) printf("%c", queue[i]);
	} else if (head < tail) {
		for (i = 0; i < head; i++) printf(" ");
		for (i = head; i < tail; i++) printf("%c", queue[i]);
		for (i = tail; i <= MAX; i++) printf(" ");	
	}	
	putchar('\n');

}

int main(void)
{
	int i;
	char str[N];
	char c;
	fgets(str, N, stdin);
	do {
		c = str[i++];
		if (c == '\n') break;
		if (c == ' ') continue;
		if (c == '*') {
			get();
			print_queue(); 
		}
		if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z') {
			put(c);
			print_queue();
		}
	} while(1);

	return 0;
}
