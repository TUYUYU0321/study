/* 입력 받은 배열의 10 개의 원소들 중 최댓값을 출력 */

#include<stdio.h>

/* max_ number : 인자로 전달받은 크기 10인 배열로부터 최댓값을 구하는 함수 */

int max_number(int* parr);

int main() {
	int arr[10];
	int i;

	printf("인자를 입력하세요\n");
	for (i = 0;i < 10;i++) {
		scanf_s("%d", &arr[i]);
	}
	printf("최댓값은 : %d", max_number(arr));
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