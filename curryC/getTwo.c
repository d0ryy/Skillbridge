#include <stdio.h>

//with value 9
//and an array of random(psuedo) numbers, fine  which numbers
//	in the array that equal up to 9


// enter a number func
// create arrays with random numbers
//

int numberArray[] = {1,2,3,4,5,6,7,8};

int startNumber = 9;



void getNumbers(int* x, int* y){

	for (int i = 0; i<=y;i++){
		printf("Array Value : %d", numberArray[i]);

}





int main(){
	int* num = &startNumber;
	int* arrayAmount = 8;
	getNumbers(&num, &arrayAmount);

	return 0;
}

