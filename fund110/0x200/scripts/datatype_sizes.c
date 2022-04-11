#include <stdio.h>					// Tells compiler to include headers for a standard input/output (I/O)



int main()
{
	printf("The 'int' data tpye is\t\t %d bytes\n", sizeof(int));
	printf("The 'unsigned int' data type is\t %d bytes\n", sizeof(unsigned int));
	printf("The 'short int' data type is\t %d bytes\n", sizeof(short int));
	printf("the 'long int' data type is\t %d bytes\n", sizeof(long int));
	printf("The 'long long int' data type is %d bytes\n", sizeof(long long int));
	printf("The 'char' data type is\t\t %d bytes\n", sizeof(char));
}
