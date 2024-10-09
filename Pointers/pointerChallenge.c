#include <stdio.h>
#include <stddef.h>

//write a program that creates and integer var with a hard-coded value. Assign that var address to a pointer variable
//display the output of the pointer, the value of the pointer, and the value of what the pointer is pointing to. 

int main(){

    int num = 99;
    int *p = &num;

    printf("address of p %p\n ", (void*)&num);
    printf("Value in address %d\n " , *p);

    return 0;
}