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

int binaryS(int *arr, int v, int l, int r)
{
    if (l <= r) {
        int m = l + (r - l)/2;
        if (v == arr[m])
            return m;

        if (v < arr[m])
            return binaryS(arr, v, l, (m - 1));
        return binaryS(arr, v, (m + 1), r);
    }
    return -1;
}

int main(int argc, char *argv[])
{
	N = atoi(argv[1]);
	int i, j, k;
    int *final = (int*)malloc(sizeof(int)*100);
	int *arr = (int*)malloc(sizeof(int)*N);
    int *nquad = (int*)malloc(sizeof(int)*N);


	for (i = 0; i < N; i++)
		arr[i] = i;
	arr[1] = 0;

    for (i=0; i<N; i++)
        nquad[i] = i*i + 1;

	for (j = 0; j < sqrt(N); j++)
		if (arr[j] != 0)
			eras(arr[j], arr);

    for (k = 0, i =0; k < N, i<100; k++)
        if(arr[k] != 0){
            final[i] = arr[k];
            i++;
        }

    int len = i;

    int b;

	for (i = 0; i < 10; i++)
        b = binaryS(final, nquad[i], 0, 9);
        if (b != -1){
            printf("%d = %d + 1", final[b], i);
        }
	printf("\n");
	return 0;
}
