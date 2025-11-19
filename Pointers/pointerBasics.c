#include <stdio.h>
#include <stddef.h>

/*
pointers occupy 8 bytes and the addresses have 16 hexadecimal digits- if it is a 64bit machine
*/

int main(){

    int number = 15;
    int *pointer = &number;
    int result = 0;
    int newRes = 0;


    result = *pointer + 5;
//    newRes = &number +5;
    printf("%d\n", result);
    printf("%d\n", newRes);    
    printf("pnums value: %p\n ", pointer); //outputs the value (an address)
    printf("pnums value: %p\n ", &number); //outputs the value (an address)
    printf("pointers address: %p\n", (void*)&pointer); //output the address
    printf("pnumber size: %d bytes\n",(int)sizeof(pointer) ); //bytes size


    return 0;
}
