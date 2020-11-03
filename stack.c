#include <stdio.h>
#include <stdlib.h>

struct stack {
	int max;
	int top;
	int *elements;
};

struct stack *newStack(int size)
{
	struct stack *pt = (struct stack*)malloc(sizeof(struct stack));
	pt -> max = size;
	pt -> top = -1;
	pt -> elements = (int*)malloc(sizeof(int) * size);

	return pt;
}

int peek(struct stack *pt)
{
	return pt -> elements[pt -> top];
}
void push(struct stack *pt, int x)
{
	pt -> elements[++pt -> top] = x;
}

int pop(struct stack *pt)
{
	return pt -> elements[pt -> top--];
}

