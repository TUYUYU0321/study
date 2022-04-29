#include <stdio.h>

int add_number(int* parr) {
	int i;
	for (i = 0;i < 3;i++) {
		parr[i]++;
	}
	return 0;
}

int main() {
	int fun[3];
	int i;

	for (i = 0;i < 3;i++) {
		scanf_s("%d", &fun[i]);
	}

	add_number(fun);

	printf(" 각 배열의 원소 값 : %d, %d, %d\n", fun[0], fun[1], fun[2]);

	return 0;
}

