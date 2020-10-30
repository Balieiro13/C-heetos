#include <stdio.h>

int len(int arr[])
{
	int size;
	size = sizeof(*arr)/sizeof(int); // n vai funcionar uma vez que *arr é o msm que arr[0]
	printf("%d\n", *arr);
	return size;
}

int main ()
{
	int A[] = {7,2,3,4,5};
	int ans = len(A);
	
	printf("the lenght of A is: %d.\n", ans);
	return 0;
}

// para a função len pegar o size do array, first, é preciso passar ele como parametro na função kkkkk ele tem que ser calculado na main() primeiro.
