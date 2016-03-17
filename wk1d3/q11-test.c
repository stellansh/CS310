#include <stdio.h>

int main() {
	int n = 128;

	// divide by 2
	printf("%d\n" n >> 1 ); 

	// multiply by 2
	printf("%d\n" n << 1 ); 

	// check odd or even (question 12)
	printf("%d\n", n & 1 );


}
