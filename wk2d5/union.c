#include <stdio.h>
typedef union{
	long a;
	double b;
}Unilodo;
int main(){
	Unilodo lodo;
	lodo.a=1000;
	lodo.b=56.98;
	printf("%li\n",lodo.a);
	printf("%f\n",lodo.b);
