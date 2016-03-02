#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* reverse(const char* cs){
	int len=(strlen(cs));
	char* new=malloc(len*sizeof(char));
	int k=0;
	int i;
	for(i=len-1; i>=0; i--){
		new[k]=cs[i];
		k++;
	}
	return new;

}
int main(){
	char * example="this is just an example ";
	char *newtry= reverse(example);
	puts(example);
}

