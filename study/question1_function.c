#include<stdio.h>
int magic_box(int value) {
	value += 4;
	printf("���� ���ڸ� ��ģ ������ ����? : %d\n", value);
	return value;
}

int main() {
	int a;
	printf("���� ���ڿ� ���� ���ڴ�? ");
	scanf_s(" %d", &a);
	magic_box(a);
	return 0;
}