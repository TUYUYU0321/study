/* �Է� ���� �迭�� 10 ���� ���ҵ� �� �ִ��� ��� */

#include<stdio.h>

/* max_ number : ���ڷ� ���޹��� ũ�� 10�� �迭�κ��� �ִ��� ���ϴ� �Լ� */

int max_number(int* parr);

int main() {
	int arr[10];
	int i;

	printf("���ڸ� �Է��ϼ���\n");
	for (i = 0;i < 10;i++) {
		scanf_s("%d", &arr[i]);
	}
	printf("�ִ��� : %d", max_number(arr));
	return 0;
}

int max_number(int* parr) {
	int i;
	int max = parr[0];

	for(i = 0;i < 10;i++) {
		if (parr[i] > max) {
			max = parr[i];
		}
	}

	return max;
}