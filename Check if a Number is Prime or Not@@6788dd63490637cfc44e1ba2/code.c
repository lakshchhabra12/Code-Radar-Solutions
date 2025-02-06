#include <stdio.h>

// Function to check if a number is prime
int is_prime(int n) {
    if (n < 2) return 0; // Numbers less than 2 are not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; // If divisible by any number other than 1 and itself, not prime
    }
    return 1;
}

int main() {
    int num;
    scanf("%d", &num);
    
    if (is_prime(num)) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }
    
    return 0;
}
