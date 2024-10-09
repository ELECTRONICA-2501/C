//write a func that find the greatest common divisor of two non-negative integer values and to return the result
    //gcd, takes two ints ad parameters

#include <stdio.h>

//iterative approach
/*
int gcdIt(int x, int y){

    while(y != 0){
        int temp = y;
        y = x %y;
        x = temp;
    }
    return x; 
}
*/

int gcd(int x, int y){

    if( y == 0){
        return x;
    }
    return gcd(y, x % y);
    
    // input examples;
    // x = 48, y = 18;
    /*
    first call: gcd(48,18)
    then it calls: gcd (18, 48 % 18) -> gcd(18, 12)
    then it calls: gcd (12, 18 % 12) -> gcd(12, 6)
    then it calls: gcd (6, 12 % 6) -> gcd(6, 0)
    now y = 0, so it returns 6, which is the gcd of 48 and 18

    */
}

int main(){
    int x = 48;
    int y = 18;
    
    int result = gcd(x, y);
    printf("GCD of %d and %d is: %d\n", x, y, result);
    
    return 0;
    
}