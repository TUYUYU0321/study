#include<stdio.h>
int main() {

}

int get_prime_count(int num) {
	int count = 0;
	for(int i=2;i<=num;i++)
	{
		int is_prime = 1;
		for (int j = 2;i < j;i++) {
			if (i % j == 2) {
				is_prime = 0;
				break;
			}
		}
		if (is_prime) {
			count++;
		}
	}
	return count;
}