#include <stdio.h>
#include <stdlib.h>
int N;

int min(int arr[]){
	int mini = arr[0];
	int loc;
	for (int c = 1; c < N; c++){
		if (arr[c] <= mini){
			mini = arr[c];
			loc = c;
		}
	}
	return loc;
}

int ssort (int arr[], int init, int N){
	if (init == N-1){
		return 0;
	}
	int n = N - init;
	int cp[n];
	int j = 0;
	for (int i = init; i < n; i++){
		cp[j] = arr[i];
		j++;
	}
	int old = arr[init];
	int mp = min(cp);
	arr[init] = cp[mp];
	mp++;
	arr[mp] = old;
	init++;
	return ssort(arr, init, N);
}

int main(){
	int v[] = {10, 0, 3, 6, 2, 4};
	N = sizeof(v)/sizeof(v[0]);

	ssort(v, 0, N);
	for (int i = 0; i < N; i++){
		printf("%d ", v[i]);
	}
	printf("\n");
	return 0;
}
