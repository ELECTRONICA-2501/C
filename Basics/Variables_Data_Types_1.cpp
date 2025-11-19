#include <iostream>

//using namespace std;

int main()
{
	int myInt; //declaration
	myInt = 15; //initialization
	int myInt2 = 16; //declaration & Inititialization

	int x = 10; // copy initialization, backwards compatible, if you say x = 3.14, will compile to x = 3, narrow conversion.
	int y(10); // brace init, constructor like
	int z{ 4 }; // uniform or brace init, allows for no narrowing,so int x{3.14} will not compile and will throw error
	std::cout << x << " " << y << " " << z << std::endl;
	std::cout << myInt <<  " " <<  myInt2 << std::endl;
	return 0;
}
