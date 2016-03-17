#include <stdio.h>//counts characters from user inpute to buffer from stdin
#include <string.h>
#define BUFSIZE 1024
int main(){


	char buf[1024];
	fgets(buf,BUFSIZE-1,stdn);
	printf("charecters reas: %d\n",int (strnlen(buf)));
	
