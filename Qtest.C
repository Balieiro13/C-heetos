#include <stdio.h>
#include <stdlib.h>
#include "que.c"

int main()
{
	struct Queue *q = newQ(100);

	if (isEmpty(q))
		printf("vazio!\n");

	enQ(q, 5);
	enQ(q, 7);
	enQ(q, 9);
	enQ(q, 11);

	print(q);

	if (!isEmpty(q))
		printf("n vazio\n");
	denQ(q);
	denQ(q);
	denQ(q);
	print(q);
	if (isEmpty(q))
		printf("vazio!\n");
	

	return 0;
}
