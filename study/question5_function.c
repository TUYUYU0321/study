#include <stdio.h>
int main() {
    int number=100;
    factorize(number);
    return 0;
}



void factorize(int n) {
    while (n != 1) {
        for (int i = 2; i <= n; i++) {
            if (n % i == 0) {
                printf("%d%s", i, i == n ? "" : " X ");
                n /= i;
                break;
            }
        }
    }
}