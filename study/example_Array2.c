// scanf�� �迭 �����ϱ�
#include <stdio.h>
int main() {
	int arr[5];
	int i, ave = 0;

	for (i = 0;i < 5;i++) {
		printf("%d ��° �л��� ������? ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	for (i = 0;i < 5;i++) {
		ave = ave + arr[i];
	}

	printf("��ü �л��� ����� : %d\n", ave / 5);
	return 0;
}