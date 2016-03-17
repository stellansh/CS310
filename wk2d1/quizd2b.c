#include <stdio.h>
#include<string.h>
int main(){
	char * buf= char* calloc(1024,sizeof(char));
	fgets(buf,1023,stdin);
	char * tok= strto(buf,"\n\t\f\r");
	int words=0;
	if(tok!=NULL){
		word=1;
		while(tok=strtok(NULL, "\n\r\t\f"!=NULL)){
			words++;b
