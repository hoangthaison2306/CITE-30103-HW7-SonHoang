#include <stdio.h>

int isPrime(int n) {
    if (n <= 1)
        return 0;          // not prime

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;      // divisible => not prime
    }
    return 1;              // prime
}

int main(void) {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (isPrime(n))
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}

