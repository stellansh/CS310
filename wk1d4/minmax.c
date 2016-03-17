dinclude <stdio.h>
int min;
int max;
int c;
void minmax(int digs[], int len){
	for(c=1; c< len ;c++){
		if(min>num1){
			min= digs[c];
		}else{ if(max< digs[c]){
			max= digs[c];
		}
	}


        printf("max number is %d\n",max);
	printf("min number is %d\n",min);
}
int main(){
	int digs[]={2,1,45,65,3,45,3,2,5,6}
	minmax(digs,10);

}
