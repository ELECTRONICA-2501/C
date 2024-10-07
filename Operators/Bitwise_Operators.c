//Logic Gates
//Useful because they can store a lot of data in the form of bits
//Bitwise AND, OR, NOR, etc.
//          &, |, ~|

//You could use a single integer variable to store severl characteristics of a person as an example:
//  store whether a person is male or female, with one bit 
// use three bits to identify if a person speaks french, german or italian
// 
// 0000 = 2^4 = 16 states

//  Operator        Description         Example:
//  &           Binary AND Operator     (A&B) = 12, i.e., 0000 1100
//  |           Binary OR Operator 
//  ^           Binary XOR Operator  
//  ~           Binary NOT Operator
//  <<          Binary Left Shift Operator, The left operand value is move left by the number of bits specified by the right operand:  Example:  A<<2 = 240 i.e., 111^^^^^1 0000

#include <stdio.h>
int main(){
 int a = 60;

int result = 0;

result = ~a;
        printf("result is %d", result);
    return 0;
}
