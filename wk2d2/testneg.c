#include<stdio.h>
int main(){
	char a[]="abcdefghi";
	char *p= a;
	p +=3;

	printf("%c\n",p[-2]);

}
