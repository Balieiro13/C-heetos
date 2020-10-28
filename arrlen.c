#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int arr[] = {0, 0, 0, 1, 1, 1, 5, 5, 5, 3, 3, 3, 3, 3, 3, 3, 7};
	int lenarr = sizeof(arr)/sizeof(arr[0]);
	printf("%d\n", lenarr);
	return 0;
}
