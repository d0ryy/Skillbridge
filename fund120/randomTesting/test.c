#include <stdio.h>
struct color_t {
	int red;
	int green;
	int blue;
};

int main (){
	struct color_t sugma;
	sugma.red = 320;
	sugma.green = 123;
	sugma.blue = 12;

	printf("RGB - The color red = %d | The color green = %d | the color blue = %d\n", sugma.red, sugma.green, sugma.blue);



	return 0;
}
