#include <stdio.h>

int main(int arg, char*argv[]){
	for (int i=arg-1; i>=0; i--){
	printf("%s\n", argv[i]);
	}
}
