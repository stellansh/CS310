#include <stdio.h>
#define NULL 0
typedef char* String environ[];
String getenv(const char *str){
	int i=0;
	String val;
	while(environ[i]!=NULL){
	if(val=strcmp(environ[0],str)){
		return val;
	return (NULL);
