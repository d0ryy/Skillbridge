#include <stdio.h>

int main (){
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0; //lower limit of temp table
	upper = 300; // upper limit
	step = 20; // step size
	
	fahr = lower;
	
	printf("Fahrenheit\tCelsius\n");
	while (fahr <=upper) {
		celsius = (5.0/9.0) * (fahr-32);
		printf("%6.0f\t\t%.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}

