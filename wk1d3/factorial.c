#include <stdio.h>
int factorial(int n){
	int ans =1;
	while(n>1){
		ans = ans * n;
		n = n-1;
	}
	return ans;
}
int main(){
	int n;
	printf("enter value of n:");
	scan("%d", &n);
	if(n >= 0){
		printf("factorial(%d) =", n);
		printf("%d\n", factorial(n);
	}else{
	        printf("the factorial is negaticve.\n");
