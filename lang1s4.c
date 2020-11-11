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
    int *final = (int*)malloc(sizeof(int)*N);
	int *arr = (int*)malloc(sizeof(int)*N);

	for (i = 0; i < N; i++)
		arr[i] = i;
	arr[1] = 0;

	for (j = 0; j < sqrt(N); j++)
		if (arr[j] != 0)
			eras(arr[j], arr);

    for (k = 0, i =0; k < N; k++)
        if(arr[k] != 0){
            final[i] = arr[k];
            i++;
        }

	for (i = 0; i < N; i++)
		if (final[i+1] == final[i] + 2 && final[i] != 0)
        printf("(%d, %d) ", final[i], (final[i]+2));
	printf("\n");
	return 0;


}

