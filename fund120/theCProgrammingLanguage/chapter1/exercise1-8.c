#include <stdio.h>

int main(){
	int c, nl, bl, tb;
	nl = 0;
	bl = 0;
	tb = 0;

	while((c = getchar()) != EOF) {
		if (c == '\n')
			++nl;
		if (c == ' ')
			++bl;
		if (c == '\t')
			++tb;

	printf("New Lines: %d | Blanks: %d | Tabs: %d\n", nl, bl,tb);
	}
}

