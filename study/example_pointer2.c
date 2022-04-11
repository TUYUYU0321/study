#include <stdio.h>
int main() {
	int* arr[3] = {2,3,5};

	int a = 2;
	
	int* p = a; // 주솟값이 0x0000000002이다.

	printf("%p\n", p);
	
}