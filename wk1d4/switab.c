#include <stdio.d>
int main(){
	char x;
	int a,b,c;
	switch((x=getchar())!= EOF){
		case '\t':
			a++;
		case '\n':
			b++;
		case ' ':
			c++;
		default:
			printf("empty");
	}
	return (a+b+c);
}

		
