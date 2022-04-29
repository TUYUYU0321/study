#include<stdio.h>
int magic_box(int value) {
	value += 4;
	printf("마술 상자를 거친 숫자의 값은? : %d\n", value);
	return value;
}

int main() {
	int a;
	printf("마술 상자에 넣을 숫자는? ");
	scanf_s(" %d", &a);
	magic_box(a);
	return 0;
}