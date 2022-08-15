#include <stdio.h>
#include <stdlib.h>



void  print(int x) {
	int ligma = (0xAA) + (0xAA<<8) + (0xAA<<16) + (0xAA<<24);


	printf("0x%x\n%x\n%x\n--------------\n", x, x, !(x ^ ligma)  );

}

int main() {
	//x = 0xFFFFFFFA			// 1111 1111 1111 1111 1111 1111 1111 1010
	//x = 0xAAAAAAAA;			// 1010 1010 1010 1010 1010 1010 1010 1010		|10
								//~0101 0101 0101 0101 0101 0101 0101 0101		|5
	print(0xAAAAAAAA);
	print(0xFFFFFFFA);
	return 0;
}


/*							
4294967295
*/
