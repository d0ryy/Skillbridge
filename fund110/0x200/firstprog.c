#include <stdio.h>					// Tells compiler to include headers for a standard input/output (I/O)

int main()
{
	int i;
	for (i = 0; i < 10; i++)			// Loop 10 times
	{
		puts("Hello, world!\n");		// Put the string to the output.
	}
	return 0;					// Tell OS the program exited without errors
}
