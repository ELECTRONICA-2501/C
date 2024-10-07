#include <stdio.h>   // Include this for printf
#include <stdbool.h> // Include this for bool type

// Function to check if a number is prime
bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) { // Loop from 2 to the square root of num
        if (num % i == 0) {
            return false; // If num is divisible by i, it's not prime
        }
    }
    return true; // If no divisors found, num is prime
}

int main() {
    // Print prime numbers between 3 and 100
    printf("Prime numbers between 3 and 100:\n");
    for (int i = 3; i <= 100; i++) {
        if (is_prime(i)) {
            printf("%d ", i); // Print the prime number
        }
    }
    printf("\n"); // Print a newline at the end
    return 0;
}
