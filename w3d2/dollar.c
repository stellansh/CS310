#include <stdio.h>
int main (){
	float dollars[3]={10.45,45.78,12.67};
	int i;
	for(i=0;i<5;i++){
		printf("$%6.2f\n",dollars[i]);
	}
}
