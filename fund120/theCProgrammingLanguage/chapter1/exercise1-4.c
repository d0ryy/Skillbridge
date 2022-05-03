#include <stdio.h>

int main (){
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0; //lower limit of temp table
	upper = 300; // upper limit
	step = 20; // step size
	
	celsius = lower;
	
	printf("Celsius\tFahrenheit\n");
	while (celsius <=upper) {
		fahr = (celsius * 1.8) + 32;
		printf("%6.0f\t\t%.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
}

