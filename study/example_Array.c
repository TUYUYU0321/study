// 반복문과 배열 연습하기
#include <stdio.h>
int main() {

	int sum_all = 0;
	int i;

	int arr[5] = { 100,90,80,70,60 };
	for (i = 0;i < 5;i++) {
		sum_all = sum_all + arr[i];
		printf("%d 번째 학생의 성적은? %d\n", i + 1, arr[i]);
	}

	printf("%d\n", i);
	printf("전체 학생의 평균은 : %d\n", sum_all / i);
}