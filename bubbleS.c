#include <stdio.h>
#include <stdlib.h>

void bbst (int arr[], int l)
{
	int i, j, aux;
	for (i = 0; i < (l-1); i++)
		for (j = l; j > i; j--)
			if (arr[j] < arr[j-1]){
				aux = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = aux;
			}
}


int main()
{
	int a[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 4, 7, 9, 3, 2, 3, 8, 4, 6, 2, 6, 4, 3, 3, 8, 3, 2, 7, 9};
	int n = sizeof(a)/sizeof(int);
	bbst(a,n);
	
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);

	printf("\n");

	return 0;
}
