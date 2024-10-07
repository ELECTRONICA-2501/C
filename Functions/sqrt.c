//write a function to compute the sqrt of a number
//if a negative number is passed, thena message is displayed and -1.0 should be returned;
//shoud use the absvalue function created before.

#include <stdio.h>
#include <math.h>
float absz(float x){

    float positiveX;
    if(x != x*(-1)){
        positiveX = x * -1;
        return positiveX;
    }
    
        return x;
}

float squrt(float x){
    if(x != x*(-1)){
        float res = pow(x, 0.5);
        return res; 
    }
    absz(x);
    printf("%f", x);
    return x;
}



int main()
{
    float x = -4;
    float result = sqrt(x);
    printf("%f", result);
    return 0;
}

