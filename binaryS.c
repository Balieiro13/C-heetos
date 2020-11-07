#include <stdio.h>
#include <stdlib.h>


int binaryS(int arr[], int v, int l, int r)
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
	int a[] = {1,2,3,4,5,6,7,8};
	int n = sizeof(a)/sizeof(int);
	int x = 5;
	int index = binaryS(a, x, 0, (n-1));

	printf("index: %d\n", index);

	return 0;
}
