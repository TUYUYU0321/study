#include <stdio.h>

int main() {
	int i = 0;

	printf("ȣ�� ���� i �� �� : %d \n", i);
	change_val(i);
	printf("ȣ�� ���� i �� �� : %d \n", i);

	return 0;
}

void change_val(int i) {
	i = 3;

}