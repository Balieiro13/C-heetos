#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
	N = 6;
	int i;
	int array[N];
	int a;
	for (i = 0; i < N; i++) {
		a = rand() % 100;
		array[i] = a;
	}
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
