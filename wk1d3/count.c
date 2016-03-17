#include <stdio.h>
int main (){
	int n=0;
	char ch;
	while((ch=getchar()) != EOF){
		if(ch== ' ' || ch=='\n'){
			n++;
		}
	} // test
	printf("num of chara : %d\n",n);
}

