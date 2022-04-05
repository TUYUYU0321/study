// 배열을 이용한 소수 찾기 (1000개 찾기)
// 소수 : 자기 자신과 1을 제외하고는 나눌 수 없음

#include <stdio.h>
int main() {
	// 우리가 소수인지 판별하고 있는 수
	int guess = 5; // 소수의 배열
	int prime[2020]; // (현재까지 찾은 소수의 개수) -1
	
	int index = 2; // for문 변수
	int i,j;			// 소수인지 판별을 위해 쓰는 변수
	int ok;

	prime[0] = 2;
	prime[1] = 3;
	
	printf("1번째 소수 : 2\n");
	printf("2번째 소수 : 3\n");

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
		//printf("ok의 값은 : %d\n", ok);
		if (ok == guess) {
			prime[index] = guess;
			//printf("index의 값은 : %d\n", index);
			//printf("guess의 값은 : %d\n", guess);
			//printf("prime[index]의 값은 : %d\n", prime[index]);

			printf("%d번째 소수 : %d\n", index + 1, prime[index]);
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

