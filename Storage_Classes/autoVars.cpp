#include <iostream>

///aaaaa

// auto, register, extern, static.
// these four storage classes are used to describe the features of a variable/function. Including the scope, visibilit and the lifetime
// they help use to trace the existence of a particular variable during the runtime of a program
// the lifetime of a variable is the time period duringwhich variable exist in computer memory some exist breifly, some are repeatedly created and destroyed and others exist for the entire execution of a program, the scope of the variable is where the variable can be reference in a program some can be referenced throught a program others can only access protions of a program, a variables visibiility of linkage , determines for a multiple-source -file program whether the identifier is known only in the current sourc efile or in any source file with proper declarations. 
// the four storage class specifier can be split into two storage durations, 1. Automatic storage duyration, 2. statis storage duration. 

// auto keyword is automatic storage duration, created in the code block in which they are define is entered, kinda like a
// local varibale
// all local variables have Automatic storage durations by default. DONT Exist outside of code block. 
// only created when the block is called, destroyed when block is exited.
// value of a local variable can onlu be accessed by the function in which the var is defined, Its value cannot be accessed by any other func
//
int main()
{
	
	// include iostream is a preprocessor library called io stream, preprocesses links libraries and gets the ready for .o > machine code. 
	// iostream allows use to interact with user by printing in info from console and input from users from keyboard. 
	// returns the values 0 to signal to the system that nothing went wrong. 

	std::cout << "suprise mothafuka" << std::endl;
	return 0;		
}
