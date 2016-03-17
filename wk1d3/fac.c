#include <stdio.h>


int fac(int n){
	int ans = 1;
	while (n>1){
		ans = ans*n;
		n=n-1;
	}
}

int main(){
	int n;
	printf("enter num");
	scanf("%d",&n);
	if (n>=0){
		int arr[n];
		for(int m=0; m<=n; m++){
			arr[m+1]=fac(n-1);
			printf("%d\n",arr[m]);

		}



		//	printf("fac(%d)=",n);
		//	printf("%d\n",fac(n));
	}else {
		printf("undefined\n");
	}
}


