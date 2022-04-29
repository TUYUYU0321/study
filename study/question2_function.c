#include <stdio.h>
int slave(int pre, int income) {
	pre = pre + income;
	return pre;
}

int main() {
	int a, b;
	printf("현재 자산은? : ");
	scanf_s("%d", &a);
	printf("오늘의 수입은? : ");
	scanf_s("%d", &b);

	slave(a, b);

	printf("현재 가지고 있는 돈 : %d\n", slave(a, b));
	
	return 0;
}