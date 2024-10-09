#include <stdio.h>

int mogrify(int a, int b){
    int temp = a*4 - b /3;
    return temp;
}

double truly_half(int x){
    double temp = x/2.0;
    return temp;
}


int main(int argc, char const *argv[])
{
    int a =7, y = 17;
    int mog = mogrify(a,y);
    printf("Done with mogrify\n");

    double x = truly_half(y);
    printf("Done with truly_half\n");

    a = mogrify(x,mog);
    printf("Results: %d, %1f\n", mog, x);
    return 0;

}
