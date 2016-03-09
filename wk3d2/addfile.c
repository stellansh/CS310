#include<stdio.h>
#include<stdlib.h>
int main(int  argc, char *argv[]){
	char c;
	if (arg!==3){
		fprintf(stderr,"give 2 files\n");
		return -1;
	}
	FILE * f1=fopen(arg[1],"a+");
	FILE * f2=fopen(argv[2],"r");
	if (f1==NULL || f2==NULL){
			fprintf(stderr,"no files\n");
			return -1;
	}
	while((c==getc(f2)) != EOF){
		putc(c,f1);
	}
}

