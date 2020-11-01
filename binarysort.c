#include <stdio.h>
#include <stdlib.h>

int binaryS(int arr[], int v, int l, int m, int r)
{
    if (l < r) {
        if (v == arr[m] || v == arr[l] || v == arr[r])
            return 0;

        if (v < arr[m]) {
            r = m;
            m = l + (r - l) / 2;
            return binarysrc(arr, v, l, m, r);
        }
        if (v > arr[m]) {
            l = m+1;
            m = l + (r - l) / 2;
            return binarysrc(arr, v, l, m, r);
        }
    }
	return 1;
}

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
