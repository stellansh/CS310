#include <unistd.h>
#include <stdio.h>
int main(){
	int pipeAB[2];
	int pipeBC[2];
	int pipeCA[2];
        pipe(pipeAB);
	pipe(pipeBC);
	pipe(pipeCA);

	int buf;
	int r=1;
	if(fork()==0){
		close(pipeCA[0]);
	
