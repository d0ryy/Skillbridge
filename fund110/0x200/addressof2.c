#include <stdio.h>						// Tells compiler to include headers for a standard input/output (I/O)


int main()
{
	int int_var = 5;	//sets var to 5
	int* int_ptr;		// set up pointer var

	int_ptr = &int_var; //Put the address of int_var into int_ptr

	printf("int_ptr = 0x%08x\n", int_ptr); // prints int_var and whats it equal to
	printf("&int_ptr = 0x%08x\n", &int_ptr); //prints the address of int_ptr
	printf("*int_ptr = 0x%08x\n", *int_ptr); //prints the 32-bit address

	printf("int_var is located at 0x%08x and contains %d\n", &int_var, int_var);
	printf("int_ptr is located at 0x%08x, and contains 0x%08x, and points to %d\n\n",
		&int_ptr, int_ptr, *int_ptr);

}
