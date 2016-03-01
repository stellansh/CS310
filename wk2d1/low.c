#include <stdio.h>
int lower(int str){
	for (int i=0; str[i]; i++){
		str[i]=tolower(str[i]);
	}
