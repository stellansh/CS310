#include <stdio.h>
#include <unistd.h>
#include <sys/file.h>

char buf[3];
int i = 0;
int putc2(char c, char* file){
		buf[i] = c;
		i++;
		if(i ==2){
		int x = open(file, O_WRONLY | O_APPEND, 777);
		write(x, buf, i);
		close(x);
	        }
}

void fflush(char * file){
	int x= open(file, O_WRONLY | O_ APPEND,777);
         write(x,buf,i);
	 close(x);
}
int main(){
	putc("x","test.txt");
	flush("test.txt");
}
