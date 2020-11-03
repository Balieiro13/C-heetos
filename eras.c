#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <math.h>
int N;

void eras(int v, int arr[])
{
#pragma omp parallel for
	for (int i = v*v; i < N; i += v)
		arr[i] = 0;

}

int main(int argc, char *argv[])
{
	N = atoi(argv[1]);
	int i, j, k;
	int *arr = (int*)malloc(sizeof(int)*N);

	for (i = 0; i < N; i++)
		arr[i] = i;
	arr[1] = 0;

	for (j = 0; j < sqrt(N); j++)
		if (arr[j] != 0)
			eras(arr[j], arr);

	for (k = 0, i = 0; i < N; i++)
		if (arr[i] != 0)
			k++;

	printf("%d\n", k);
	return 0;


}

