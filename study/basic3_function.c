#include <stdio.h>
int main() {
	int i=1;
	printf("���� ���� �ȿ� ������ ����? %d\n", plus_four(i));
	
		return 0;
}

int plus_four(int a) {
	a = a + 4;
	return a;
}