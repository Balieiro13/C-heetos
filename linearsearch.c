#include <stdio.h>
int N;

int lsearch (int v, int arr[]){
	for (int i = 0; i < N; i++) {
		if(v == arr[i]) { return v; }
		}
	printf("False\n");
	return 0;
}

int main(){
	N = 5;
	int a[N];
	a[0] = 4;
	a[1] = 3;
	a[2] = 10;
	a[3] = 11;
	a[4] = 5;
	int ans = lsearch(11, a);
	printf("%d\n", ans);
	return 0;
}
