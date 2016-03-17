i8#include<stdio.h>
int main(){
	int arr[10][10];
	for (int i=0; i<=100;i++){
		arr[i]=i;
	}
	int j,row1,row2,col1,col2;
	int a[10][10];
	int *p=&a[0][0];
	for (i=0;i<100;i++){
		p[i]=i;
	}
	print("")
