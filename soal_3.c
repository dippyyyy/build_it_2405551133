#include <stdio.h>
#include <stdbool.h>


bool isPrime(int n) {
    
    if (n <= 1) {
        return false;
    }
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}
int main() {
    int number;

    printf("Masukkan bilangan: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }

    return 0;
}
