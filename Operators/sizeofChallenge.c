//create a C program, that displays bytse size of basic size of basic types supported in c.

//Display the byte size of the following types
    /*
    
    int, char, long, long long, double, long double
    
    use the %zd format specifier to format each size
    use the sizeof operator


    */

#include <stdio.h>

int main() {
    

    // Print the sizes of each variable
    printf("Size of int: %zd bytes\n", sizeof(int));
    printf("Size of long: %zd bytes\n", sizeof(long));
    printf("Size of long long: %zu bytes\n", sizeof(long long));
    printf("Size of double: %zu bytes\n", sizeof(double ));
    printf("Size of long double: %zu bytes\n", sizeof(long double));
    printf("Size of char: %zu bytes\n", sizeof(char));

    return 0;
}
