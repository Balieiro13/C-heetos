#include<stdio.h>
#include<stdlib.h>

int mdc(int n, int d)
{
	if (d == 0)
		return n;
	
	return mdc(d, n%d);
}

int main(int argc, char *argv[])
{
	int a, b, c, d;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = atoi(argv[3]);
	
	printf("%d\n", mdc(mdc(a,b),c));
	return 0;
}
