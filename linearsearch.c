#include <stdio.h>
#include <stdlib.h>

int N;

int lsearch (int v, int arr[], int size){
	for (int i = 0; i < N; i++) {
	    if(v == arr[i]) {printf("True\n"); return 1; }
		}
	printf("False\n");
	return 0;
}

int main(int argc, char *argv[]){
	int a[] = {34,12,56,3,18,10,2,3,1};
	int n = atoi(argv[1]);
	N = sizeof(a)/sizeof(int);
	lsearch(n, a, N);
	return 0;
}
