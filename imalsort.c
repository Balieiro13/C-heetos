#include <stdio.h>
#include <stdlib.h>

int N;

void isort (int *arr){
	for (int i = 1; i < N; i++){
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key){
			arr[j + 1] = arr[j];
			j-- ;
		}
		arr[j + 1] = key;
	}
}

int main(){
	N = 50000;
	int i, j;
	int *arr; 
	arr = (int*)malloc(sizeof(int)*N);
	j = 0;
	for (i = N; i > 0; i--){
		arr[j] = i;
		j++;
	}
	isort(arr);
	printf("Sorted array is complete! \n");
	printf("%d %d \n", arr[0], arr[N-1]);
	return 0;
}
