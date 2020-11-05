#include <stdio.h>
#include <stdlib.h>
#include "Queue.c"

void dist(int c, int rede[6][6], int sz)
{
	int n = sz;
	struct Queue *q = newQ(100);

	enQ(q, c);

	int d[n];
	for (int i = 0; i < n; i++)
		d[i] = n;
	d[c] = 0;

	while (!isEmpty(q)){
		int i = denQ(q);
		for (int j = 0; j < n; j++){
			if (rede[i][j] == 1 && d[j] > d[i]+1){
				d[j] = d[i] + 1;
				enQ(q, j);
			}
		}
	}
	for (int l = 0; l < n; l++)
		printf("%d ", d[l]);
	printf("\n");
}

int main()
{
	int mat[6][6] = {
		{0,0,1,1,1,0},
		{0,0,0,0,0,0},
		{0,1,0,0,1,0}, 
		{0,0,0,0,1,1}, 
		{0,1,0,0,0,1}, 
		{0,1,0,0,0,0}};
	
	int ori = 0;

	dist(ori, mat, 6);
	
	return 0;
}
