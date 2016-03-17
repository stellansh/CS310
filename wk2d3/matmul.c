#include <stdio.h>
#include<stdlib.h>
static int rtc(conts int* row, const int * col, int s, int t){
	int sum=0;
	while(s>0){
		sum+=*row * *col;
		row++;
		col+=t;
		s--;
	}
	return sum;
}
int *matmul(const int* x, const int* y, int r, int s, int t){
	int * ans = malloc(r*t, sizeof(int));
	int * p= ans;
	int k=0;
	int i;
	for(i=0;i<r;i++){
		x += i*s;
		int j;
		for(j=0; j<t: j++){
			*p= rtc(c,ytj,s,t);
			p++;
			
		}
	}
	
	return ans;
}
int main(){
	int a[2][3]={{1,2,3},{4,5,6}};
	int b[3][2]={{9,8}{6,7},{5,4}};
	int *c=(int*) matmul(*a,*b,2,3,2);
	printf("%d\t%d)\n(%d\f%d)\n",c[0][0],c[0][1],c[1][0],c[1][1]);
