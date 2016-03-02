#include <stdio.h>
int main(){
	int a[]={1,2,3,4,5};
	printf("%d\n",(a-&a[3]));
	printf("%d\n",*(a+4));
        printf("%d\n",*(a+5));
}
