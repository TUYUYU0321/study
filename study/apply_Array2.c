// �迭�� �̿��� �Ҽ� ã�� (1000�� ã��)
// �Ҽ� : �ڱ� �ڽŰ� 1�� �����ϰ�� ���� �� ����

#include <stdio.h>
int main() {
	// �츮�� �Ҽ����� �Ǻ��ϰ� �ִ� ��
	int guess = 5; // �Ҽ��� �迭
	int prime[2020]; // (������� ã�� �Ҽ��� ����) -1
	
	int index = 2; // for�� ����
	int i,j;			// �Ҽ����� �Ǻ��� ���� ���� ����
	int ok;

	prime[0] = 2;
	prime[1] = 3;
	
	printf("1��° �Ҽ� : 2\n");
	printf("2��° �Ҽ� : 3\n");

	for (;;) {
		for (i = 0;i < index;i++) {
			if ((guess % prime[i]) == 0) {
				ok = 0;
				break;
				
			}
			else {
				ok = guess;
			}
		}
		//printf("ok�� ���� : %d\n", ok);
		if (ok == guess) {
			prime[index] = guess;
			//printf("index�� ���� : %d\n", index);
			//printf("guess�� ���� : %d\n", guess);
			//printf("prime[index]�� ���� : %d\n", prime[index]);

			printf("%d��° �Ҽ� : %d\n", index + 1, prime[index]);
			index++;
		}
		else {
			guess++;
		}
		if (index >2345) {
			break;
			}
	}
	return 0;
}

