#include <stdio.h>
int sum(int num) {
	int result = 0;
	for (int i = 1;i < num + 1;i++) {
		result = result + i;
	}
	return result;
}

int main() {

	int a;
	printf("1���� �Է��� ���ڱ����� ���� ���մϴ� : ");
	scanf_s("%d", &a);
	printf("����� = %d\n", sum(a));
	return 0;
}

