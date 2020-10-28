#include <stdio.h>
#include <stdlib.h>
#define N 1000000000

int main()
{
	int i, *arr;
	arr = (int*)malloc(sizeof(int)*N);
	for (i=0; i < N; i++)
		arr[i] = i+1;

	for (i = 0; i < N; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}

