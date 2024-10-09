//Variable length arrays

/*what if you dont know an arrays size at compilation time?

to handle this you would have to use dynamix memory alloc with malloc,

a variable lenth array is an array whose length or size is deined in terms of an expression evaluated at execution time
enables you to work with arrays in your programs without having to give them a constant size

*/

#include <stdio.h>

int main(){
    size_t size = 0;

    printf("Enter the number of elements you want to store:");
    scanf("%zd", &size);

    float values[size];
    return 0;
}