// �迭 ����ϱ�
#include <stdio.h>
int main() {
	int arr[10] = { 2,10,30,21,34,23,53,21,9,1 };

	for (int i = 1; i <= 10;i++) {
		printf("�迭�� %d��° ���� : %d\n", i, arr[i-1]);
	}
	return 0;
}