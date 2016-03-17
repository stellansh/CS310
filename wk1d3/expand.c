#include <stdio.h>

int main() {
	char c;
	while ( (c = getchar()) != EOF) {
		if (c == '\t') {
			putchar(' ');
			putchar(' ');
			putchar(' ');
			putchar(' ');
		} else {
			putchar(c);
		}
	}
}
