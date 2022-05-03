#include <stdio.h>

int main() {
	int a[4] = {2,52,14,63},x ;
	int* pa;
	pa = &a[0];
//	printf("%d\n", *pa);
	x = *pa;
	printf("%d\n", x);
	pa = pa+1;
	printf("%d\n", *pa);

	return 0;
}
