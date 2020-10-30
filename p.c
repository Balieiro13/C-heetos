#include <stdio.h>
#include <stdlib.h>

int main() {
	int a = 10;
	int *p = &a;
	int *P = (int*)malloc(sizeof(int));
	*P = a;

	a++;
	
	printf("adress of a: %p,\nadress of p: %p,\nvalue of a: %d,\nvalue of p: %p,\ndereference of p: %d.\n", &a, &p, a, p, *p);

	printf("adress of P: %p,\nvalue of P: %p,\ndereference of P: %d\n", &P, P, *P);

	return 0;
}
