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
	int a, b;
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("O mdc de %d e %d é %d\n", a, b, mdc(a,b));
	return 0;
}
