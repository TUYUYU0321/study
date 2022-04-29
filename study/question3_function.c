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
	printf("1부터 입력한 숫자까지의 합을 더합니다 : ");
	scanf_s("%d", &a);
	printf("결과값 = %d\n", sum(a));
	return 0;
}

