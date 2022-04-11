#include<stdio.h>

int main() {
	int a;
	int b;
	const int *pa = a;

	a = 3;
	a = 2;

	printf("%d\n", *pa);
	printf("%d\n", a);
	return 0;
}