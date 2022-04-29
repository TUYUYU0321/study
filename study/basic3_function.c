#include <stdio.h>
int main() {
	int i=1;
	printf("마술 상자 안에 들어가야할 수는? %d\n", plus_four(i));
	
		return 0;
}

int plus_four(int a) {
	a = a + 4;
	return a;
}