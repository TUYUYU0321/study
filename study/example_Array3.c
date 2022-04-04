// 10명의 학생 성적을 받아
// 전체 학생의 평균, 합격과 불합격을 나눠보자. (기준 = 평균)

#include <stdio.h>
int main() {
	int arr[10];
	int i, sum=0;

	for (i = 0;i < 10;i++) {
		printf("%d 번째 학생의 점수는? ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	for (i = 0;i < 10;i++) {
		sum = sum + arr[i];
	}

	int ave = sum / 10;

	printf("\n");
	printf("전체 학생의 평균은 : % d\n", ave);

	for (i = 0;i < 10;i++) {
		if (arr[i] >= ave) {
			printf("%d번째 학생은 합격입니다\n", i + 1);
		}
		else {
			printf("%d번째 학생은 불합격입니다\n", i + 1);
		}
	}

	return 0;
}