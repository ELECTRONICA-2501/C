//First Iteration,

#include <stdio.h>

int main(){

        int primes[50];     // store the first 50 primes, 
        primes[0] = 2;          //hardcode the first numbers 2, and 3
        primes[1] = 3;
        int count = 2; //start counting primes from 2, (since 2 and 3 are already added)


        for (int i = 5; i < 100; i+=2){ // check only odd numbers starting from 5, skip evens
            int is_prime  = 1;  // mark if it is prime
            for (int j= 0; j < count; j++){ 
                if(i % primes[j] == 0){
                    is_prime = 0; // mark if not prime
                    break;
                }
            }
            if(is_prime){
                primes[count] = i;
                count++;
                if (count == 50){
                    break;
                }
            }
        }
        // Print the primes found
    printf("First 50 primes:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", primes[i]);
    }
    printf("\n");

    return 0;
        
}