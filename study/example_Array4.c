/* 평균 구하기*/
#include <stdio.h>
int main() {
    int arr[5];  // 성적을 저장하는 배열
    int i, ave = 0;
    int index = 0;

    for (i = 0; i < 5; i++)  // 학생들의 성적을 입력받는 부분
    {
        printf("%d 번째 학생의 성적은? ", i + 1);
        scanf_s("%d", &arr[i]);
    }

    for (int j = 0;j < 5;j++) {
        for (index = 0;index < 4;index++) {
            if (arr[index] > arr[index + 1]) {
                int a = arr[index];
                arr[index] = arr[index + 1];
                arr[index + 1] = a;
            }
        }
    }

    printf("%d\n", arr[4]);

    /*for (int x = 4;x >= 0;x--) {
       printf("%d\n", arr[x]);
    }
    */

    return 0;
}