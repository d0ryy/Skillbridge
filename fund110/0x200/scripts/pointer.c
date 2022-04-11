#include <stdio.h>						// Tells compiler to include headers for a standard input/output (I/O)
#include <string.h>


int main()
{
	char str_a[20];						// 20-element char array
	char* pointer;						// pointer, meant for a char array
	char* pointer2;						// DJ Khaled, "Another One"

	strcpy(str_a, "Hello World!\n");
	pointer = str_a;					// Set the first pointer to the start of the array
	printf(pointer);

	pointer2 = pointer + 2;					// set the second pointer 2 bytes further in.
	printf(pointer2);
	strcpy(pointer2, "y you guys!\n");			//copy into that spot
	printf(pointer);					//print again

}
