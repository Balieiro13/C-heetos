#include <stdio.h>
#include <stdlib.h>

int binarysrc(int arr[], int v, int l, int m, int r)
{
	while (l < r){
		if (v == arr[m] || v == arr[l] || v == arr[r])
			return 0;

		if (v < arr[m]) {
			r = m;
			m = l + (r - l) / 2;
			return binarysrc(arr, v, l, m, r);
		}
		if (v > arr[m]) {
			l = m+1;
			m = l + (r - l) / 2;
			return binarysrc(arr, v, l, m, r);
		}
	}
	return 1;
}

int main(int argc, char *argv[])
{
	int N = 1000000;
	int *A;
	A = (int*)malloc(sizeof(int)*N);
	for (int i = 0; i < N; i++)
		A[i] = i;
	int a = atoi(argv[1]);
	int len = N - 1;
	int c = binarysrc(A, a, 0, len/2, len);
	if (c == 0)
		printf("True!\n");
	if (c == 1)
		printf("False!\n");
	return 0;
}
