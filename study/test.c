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
	

	// 동적할당 : dx에 하나만 할당해주는 게 아니라, 배열식으로 할당 가능
	// 함수 : malloc (동적 할당), free (메모리 해제)

// 포인터 => 어떤 주솟값을 저장
// int *x를 정의해줘야지 int **x를 정의해줄 수 있음
// 
}

