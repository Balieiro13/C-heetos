#include <stdio.h>
#include <stdlib.h>


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

int main()
{
    int *a = (int*)malloc(sizeof(int)*10);
    for (int i = 0; i < 10; i ++)
        a[i] = 2*i + 1;
    int *q = (int*)malloc(sizeof(int)*10);
    for (int h = 0; h < 10; h++)
        q[h] = h*h + 1;

	int n = sizeof(a)/sizeof(int);
	int index = binaryS(a, q[2], 0, 9);

	printf("index: %d\n", a[index]);

	return 0;
}
