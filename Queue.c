#include <stdio.h>
#include <stdlib.h>

struct Queue {
	int tail;
	int head;
	int *items;
};

struct Queue* newQ(int size)
{
	struct Queue *p = (struct Queue*)malloc(sizeof(struct Queue));

	p->tail = 0;
	p->head = -1;
	p->items = (int*)malloc(sizeof(int)*size);

	return p;
}


int isEmpty(struct Queue *p)
{
	return p->tail > p->head;
}

int next(struct Queue *p)
{
	return p->items[p->tail];
}

void enQ(struct Queue *p, int x)
{
	p->items[++p->head] = x;
}

int denQ(struct Queue *p)
{
	int q = p->items[p->tail];
	++p->tail;
	return q;
}

void print(struct Queue *p)
{
	for (int i = p->tail; i <= p->head; i++)
		printf("%d ", p->items[i]);
	printf("\n");
}

