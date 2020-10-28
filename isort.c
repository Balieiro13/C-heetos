#include <stdio.h>

int N;

void isort (int arr[]){
	for (int i = 1; i < N; i++){
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] < key){
			arr[j + 1] = arr[j];
			j-- ;
		}
		arr[j + 1] = key;
	}
}

int main(){
	int i;
	int array[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9, 3, 2, 3, 8};
	N = sizeof(array)/sizeof(int);
	for (i = 0; i < N; i++){
		printf("%d, ", array[i]);
	}
	printf("\n");
	isort(array);
	for (i = 0; i < N; i++){
		printf("%d, ", array[i]);
	}
	printf("\n");
	return 0;
}
