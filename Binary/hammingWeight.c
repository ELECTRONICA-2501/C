#include <stdio.h>
#include <stdint.h>  // Include this header for uint32_t

//Iterative approach
/*
int hammingWeight(uint32_t n) {
    int count = 0;
    while (n != 0) {
        n = n & (n - 1);
        count++;
    }
    return count;
}
*/

//recursive approach
int hammingWeight(uint32_t n){
    if( n == 0){
        return 0;
    }
    return 1+hammingWeight(n & (n-1));
}

int main(int argc, char const *argv[]) {
    uint32_t n = 0b10100010000100010000100010001011;  // Binary representation of 11
    int result = hammingWeight(n);
    printf("The number of 1 bits in %u is: %d\n", n, result);  // Print result
    return 0;
}
