#include<stdio.h>
#include<stdlib.h>
int main() {

	int a[] = {1,2,3};
	int b[] = { 3,23,4 };
	int c[] = { 2 };

	int* d[3] = {a,b,c};

	printf("%d\n", d[0][0]);

	int* x = a;
	int** dx = { &x };
	

	// �����Ҵ� : dx�� �ϳ��� �Ҵ����ִ� �� �ƴ϶�, �迭������ �Ҵ� ����
	// �Լ� : malloc (���� �Ҵ�), free (�޸� ����)

// ������ => � �ּڰ��� ����
// int *x�� ����������� int **x�� �������� �� ����
// 
}

