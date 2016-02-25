#include <stdio.h>
int main(){
	int c;
	int upper(int c);

	while((c= getchar()) !=EOF){
		putchar(upper(c));
	}
}
int upper(int c){
	if(c>='a' && c<='z')
		return(c - ' ');
	else return(c);
