#include <stdio.h>
int main() {
	int* p;
	int a;

	p = &a;
	a = 2;

	printf("a�� �� : %d\n", a);
	printf("a�� �� : %d\n", *p);
	printf("a�� �ּڰ� : %p\n", p);
	printf("a�� �ּڰ� : %p\n", &a);

	return 0;
}