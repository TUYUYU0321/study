/* ��� ���ϱ�*/
#include <stdio.h>
int main() {
    int arr[5];  // ������ �����ϴ� �迭
    int i, ave = 0;
    int index = 0;

    for (i = 0; i < 5; i++)  // �л����� ������ �Է¹޴� �κ�
    {
        printf("%d ��° �л��� ������? ", i + 1);
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