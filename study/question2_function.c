#include <stdio.h>
int slave(int pre, int income) {
	pre = pre + income;
	return pre;
}

int main() {
	int a, b;
	printf("���� �ڻ���? : ");
	scanf_s("%d", &a);
	printf("������ ������? : ");
	scanf_s("%d", &b);

	slave(a, b);

	printf("���� ������ �ִ� �� : %d\n", slave(a, b));
	
	return 0;
}