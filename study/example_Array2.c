// scanf와 배열 연습하기
#include <stdio.h>
int main() {
	int arr[5];
	int i, ave = 0;

	for (i = 0;i < 5;i++) {
		printf("%d 번째 학생의 성적은? ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	for (i = 0;i < 5;i++) {
		ave = ave + arr[i];
	}

	printf("전체 학생의 평균은 : %d\n", ave / 5);
	return 0;
}