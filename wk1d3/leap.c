#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
	if (argc != 2) {
		fprintf(stderr, "need year argument");
		exit(1);
	}
	int c = atoi(argv[1]);

	if((c%400==0) || ((c%4==0)&&(c%100!=0))){
		printf("is a leap year!");
	}else{
		printf("is not a leap year!");
	}
}
