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
