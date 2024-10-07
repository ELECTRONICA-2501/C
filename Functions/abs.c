//write a func that calculates the absolute val of a number
//should take as a parameter a float and return float
//test this func with ints and floats
#include <stdio.h>
float abs(float x){

    float positiveX;
    if(x != x*(-1)){
        positiveX = x * -1;
        return positiveX;
    }
    
        return x;
    

}


int main(){
    float x = -48.2;
    float result = abs(x);
    printf("%f", result);
    return 0;
}