#include <stdio.h>
#include <stdlib.h>

#define ADD 1
#define DELETE 2
#define DUMP 3
#define MOVE_NEXT_TO_FRONT 4
#define EXCHANGE 5
#define QUIT 9

struct node
{
	int key;
	struct node *next;
};

struct node *head, *z, *t;

void listinitialize()
{
	head = (struct node *)malloc(sizeof *head);
	z = (struct node *)malloc(sizeof *z);
	head->next = z;
	head->key = 0;
	z->next = z;
}

struct node *searchnode(int key)
{
	struct node *temp;
	temp = head->next;
	while(temp != z) {
		if (temp->key == key) {
			return temp;
		}
		temp = temp->next;
	}
	printf("%dのノードが見つかりませんでした。\n", key);
	return temp;
}
		

void deletenext(struct node *t)
{
	t->next = t->next->next;
}

struct node *insertafter(int v, struct node *t)
{
	struct node *x;
	x = (struct node *)malloc(sizeof *x);
	x->key = v;
	x->next = t->next;
	t->next = x;
	return x;
}

void movenexttofront(struct node *t) {
	struct node *target;
	target = t->next;
	if (target == z) {
		puts("指定したNodeの次は有効なノードではありません。");
		return;
	}
	t->next = t->next->next;
	target->next = head->next;
	head->next = target;
}

int indexof(int key)
{
	int index = 0;
	struct node *tmp;
	tmp = head->next;
	while (tmp != z) {
		index++;
		if (tmp->key == key) {
			return index;
		}
		tmp = tmp->next;
	}
	return -1;
}

void exchange(struct node *t, struct node *u)
{
	struct node *a;
	struct node *b;
	struct node *c;
	struct node *d;
	if (u->next == z) {
		puts("zノードは交換できません。");
		return;
	}
	a = t->next;
	b = u->next;
	c = u->next->next;
	d = t->next->next;
	if (b != d) {
		t->next = b;
		u->next = a;
		b->next = d;
		a->next = c;
	} else {
		t->next = b;
		a->next = c;
		b->next = a;
	}
}

struct node *operation_point() {
	int key;
	int sw;
	struct node *temp;
	do {
		printf("1: 先頭 2:指定した値の後ろ > ");
		scanf("%d", &sw);
		switch(sw) {
			case 1:
				temp = head;
				break;
			case 2:
				printf("値を指定してください > ");
				scanf("%d", &key);
				temp = searchnode(key);
				if (temp == z) {
					printf("指定したNodeが見つかりませんでした。\n");
				}
				break;
			default:
				puts("1または2を選択してください。");
				break;
		}
	} while (sw != 1 && sw != 2);
	return temp;
}	

void printlist()
{
	struct node *temp;
	temp = head->next;
	printf("h → ");
	while(temp != z) {
		printf("%d → ", temp->key);
		temp = temp->next;
	}
	printf("z");
	putchar('\n');
}

int main(void)
{
	int sw;	
	int key;
	int n1, n2, tmp; // ノードの位置
	int key1, key2; // ノードの値
	struct node *t;
	struct node *u;
	struct node *prev;
	listinitialize();
	while(1) {
		printf("%d:追加 %d:削除 %d:表示 %d:先頭へ移動 %d:交換 %d:終了 > ", ADD, DELETE, DUMP, MOVE_NEXT_TO_FRONT, EXCHANGE, QUIT);
		scanf("%d", &sw);
		if (sw == 9) break;
		switch(sw) {
			case ADD:
				prev = operation_point();
				if (prev == z) break;
				printf("作成するNodeの値を整数で入力してください: ");
				scanf("%d", &key);
				insertafter(key, prev);
				break;
			case DELETE:
				prev = operation_point();
				if (prev == z) break;
				deletenext(prev);
				break;
			case DUMP:
				printlist();
				break;
			case MOVE_NEXT_TO_FRONT:
				prev = operation_point();
				if (prev == z) break;
				movenexttofront(prev);
				break;
			case EXCHANGE:
				puts("2つのノードを交換します。");
				puts("交換するノードの値を2つ指定してください。");
				printf("ノード1の値: ");
				scanf("%d", &key1);
				printf("ノード2の値: ");
				scanf("%d", &key2);

				n1 = indexof(key1);
				if (n1 == -1) {
					printf("指定した\"%d\"のノードが見つかりません。\n", key1);
					break;
				}
				n2 = indexof(key2);
				if (n2 == -1) {
					printf("指定した\"%d\"のノードが見つかりません。\n", key2);
					break;
				}
				if (n1 > n2) { 
					tmp = n1; n1 = n2; n2 = tmp; 
					tmp = key1; key1 = key2; key2 = tmp; 
				};
				t = searchnode(key1);
				u = searchnode(key2);
				exchange(t, u);
				break;
			default:
				puts("選択した値に誤りがあります。");
				break;
		}
	};
	
	return 0;	
}
