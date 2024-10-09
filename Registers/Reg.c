/*A processor register (CPU Register) is one of a small st of data holding places that are part of the computer processor

a register may hold an instruction, a storage address, or any kind of data

the register storage class is used to define local variables that should be stored in a register instead of RAM (memory)
makes the use of register variable to  be much faster than that of the variables stored in the memory during the runtime of the program

the resigster storage class should only be used for variables that require quick access 
the variables which are most frequently used in a C program
if a funciton uses a particular variable heavily

the keyword register hints to the compiler that a given variable can be put in a register

it is the compilers choice to put it in a register or not
MIGHT be stored in a register depending on teh hardware and implementation restrictions generally, cimpiler themselve do optimizations and put the variables in registers.

both local variables and formal parameters can be declared as register variables

this storage class declares register variables which have the same func as that of the auto variables
the lifetime of register variables remains only when control is within the block

the variable stored in a register has a maximum size equal to the register size

you cannot obtain the address of a regiser varialbe using pointers cannot have the unary '&' operate applied to it (AS it does not have a memory location)
*/

#include <stdio.h>

int main(){
    register int x;

    for (x  = 0; x <= 15; x++)
    {
        printf("\n%d", x);

    }
    return 1;
    
}