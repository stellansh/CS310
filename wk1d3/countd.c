#include <stdio.h>


int main (){
	int n = 0;
	scanf("%d", &n);

	int ch=0;
	while(n!=0 ){
		n/=10;
		ch++;
	}
	printf("num of chara : %d\n",ch);
}


