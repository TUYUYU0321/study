#include <stdio.h>
int main() {
	int* arr[3] = {2,3,5};

	int a = 2;
	
	int* p = a; // �ּڰ��� 0x0000000002�̴�.

	printf("%p\n", p);
	
}