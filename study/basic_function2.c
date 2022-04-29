#include <stdio.h>

int main() {
	int i = 0;

	printf("호출 이전 i 의 값 : %d \n", i);
	change_val(i);
	printf("호출 이후 i 의 값 : %d \n", i);

	return 0;
}

void change_val(int i) {
	i = 3;

}