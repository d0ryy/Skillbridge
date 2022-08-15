#include <stdio.h>
#define MAX 30		//sets the max buffer size.

int main(){
	int c,count;		// c is used for input, count gets the count of input, used to store in arrray
	char buffer[MAX]; 	//Sets up the buffer array for saving the input from getchar
	
	count = 0;		//Sets count to zero so it saves properly
	while((c = getchar()) != EOF) {

		buffer[count] = c;	// sets the arrays index to the count, to the input
		++count;			// increases c value
		putchar(c);
		printf("%s", buffer);	//prints the array
	}

	return 0;
}

