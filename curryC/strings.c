#include <stdio.h>

int main() {
	printf("What is your favorite food?: ");
	char favFood[50];
	scanf("%49s", favFood);
	printf("%s\n", favFood);

	return 0;
}
