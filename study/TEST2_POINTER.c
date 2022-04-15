#include <stdio.h>
int main() {
	int arr[4]={1,2,3,4};

	printf("%p\n", arr);
	printf("%d\n", arr[0]);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr);

	return 0;
}