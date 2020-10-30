#include <stdio.h>
#include <stdlib.h>
int N;

void merge(int arr[], int p, int q, int r){
	int i, j;
	int n = q - p + 1;
	int m = r - q;
	int L[n+1], R[m+1];
	for (i = 0; i < n; i++){
		L[i] = arr[p + i];
	}
	for (j = 0; j < m; j++){
		R[j] = arr[q + 1 + j];
	}
	L[n] = 100;
	R[m] = 100;

	i = 0;
	j = 0;
	for(int k = p; k <= r; k++){
		if(L[i] <= R[j]){
			arr[k] = L[i];
			i++;
		}
		else{
			arr[k] = R[j];
			j++;
		}
	}
}

void merge_sort(int arr[], int p, int r) {
	if (p < r){
		int q = p + (r - p) / 2;
		merge_sort(arr, p, q);
		merge_sort(arr, q+1, r);
		merge(arr, p, q, r);
	}
}

int main(){
	int A[] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9, 3, 2, 3, 8, 6, 4, 3, 3, 8, 3, 5, 0};
	N  = sizeof(A) / sizeof(A[0]);

	for (int i = 0; i < N; i++){
		printf("%d, ", A[i]);
	}
	printf("\n\n");
	merge_sort(A, 0, N-1);
	for (int i = 0; i < N; i++){
		printf("%d, ", A[i]);
	}
	printf("\n");
}
