// 10���� �л� ������ �޾�
// ��ü �л��� ���, �հݰ� ���հ��� ��������. (���� = ���)

#include <stdio.h>
int main() {
	int arr[10];
	int i, sum=0;

	for (i = 0;i < 10;i++) {
		printf("%d ��° �л��� ������? ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	for (i = 0;i < 10;i++) {
		sum = sum + arr[i];
	}

	int ave = sum / 10;

	printf("\n");
	printf("��ü �л��� ����� : % d\n", ave);

	for (i = 0;i < 10;i++) {
		if (arr[i] >= ave) {
			printf("%d��° �л��� �հ��Դϴ�\n", i + 1);
		}
		else {
			printf("%d��° �л��� ���հ��Դϴ�\n", i + 1);
		}
	}

	return 0;
}