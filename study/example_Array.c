// �ݺ����� �迭 �����ϱ�
#include <stdio.h>
int main() {

	int sum_all = 0;
	int i;

	int arr[5] = { 100,90,80,70,60 };
	for (i = 0;i < 5;i++) {
		sum_all = sum_all + arr[i];
		printf("%d ��° �л��� ������? %d\n", i + 1, arr[i]);
	}

	printf("%d\n", i);
	printf("��ü �л��� ����� : %d\n", sum_all / i);
}