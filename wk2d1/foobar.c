#include <stdio.h>
int main(){
	char foo[]="abcd";
	char bar[]="efghabcd";
	strcat(foo,bar);
	printf("%s\n",foo);
