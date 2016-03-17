#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/file.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/wait.h>

#define MAXLINE 80
#define MAXARG 20
#define WHITE " \n\t"

// turn the given command into tokens
void tokenize(char* cmd, char* argv[]) {
    int i = 0;
    char* tok = strtok(cmd, WHITE);
    argv[i++] = tok;
    while (i < MAXARG && tok != NULL){
	    // last tok will be NULL
	    argv[i++] = tok = strtok(NULL, WHITE); 
    } 
    
    if(strcmp(argv[i-2],"&")==0){
	    argv[i-2]=NULL;
    } 
 
}


// fork and then exec the tokenized command 
// don't wait for it to finish (run in the background)
// prompt therefore usually re-appears first, then child output
int background(char* argv[]) {

	int i;
	int id=fork();
	if (id == 0) {
		for(i=0;argv[i]!=NULL;i++){
			if  (strcmp(argv[i],"<")==0){
				argv[i]=NULL;
				int fd= open(argv[i+1],O_RDONLY);
				dup2(fd,0);//stdin from file 
				close(fd);
			}else if(strcmp(argv[i],">")==0){
				argv[i]=NULL;
				int fd1= open(argv[i+1],O_WRONLY|O_CREAT );
				dup2(fd1,1);// stdout goes to file
				close(fd1);
			}else if (strcmp(argv[i],">>")==0){
				argv[i]=NULL;
				int fd2= open(argv[i+1],O_WRONLY|O_APPEND|O_CREAT);
				dup2(fd2,1);//stdout appended to file
				close(fd2);

			}
		}
		execv(argv[0], argv);
		_exit(1); // if we get here execv failed

	} else if (id < 0) {
		fprintf(stderr, "fork failed\n");
		perror("background");
	}
	union wait status;
	wait(&status);
	return id;
}
void musaza(char * argv[], int i){    
	int fds[2];
	pipe(fds);
	int id1 = fork();

	if(id1==0){
		close(fds[0]);// close reading end
		dup2(fds[1],1);// stdout becomes dup of fds[1]
		close(fds[1]);
		execv(argv[0],argv);// stdout writes to pipe
		_exit(1);
	}
	close( fds[1] );

	int id2 = fork();
	if(id2==0){
		close(fds[1]);// close writing
		dup2(fds[0],0);// stdin becomes dup of fds[0]
		close(fds[0]);
		execv(argv[i+1],&argv[i+1]);
		_exit(1);
	}
	close (fds[0]);

}

void musaza2(char * argv[],char * cmd,int i){
	int numofpipes=0;
	int len =strlen(cmd);
	int j;
	for (j=0; j<len; j++) {
		if (cmd[j] == '|') {
			numofpipes++;
		}
	}
	int numofpipes=2* numofpipes;

	int fds2[numofpipes];
	
// i need to finish this up.....
	for(i=0;i<numofpipes;i++){
		if (pipe(fds+i)<0){
			perror("failes to pipe");
			exit(1);
		}else if(pipe(fds+i)==0){
			while(cmd!=NULL){


			


// main loop of the shell
int main() {
    char cmd[MAXLINE+1];
    char* argv[MAXARG+1];
    char* got;

    while (1) {
        printf("mysh ready$ ");
        got = fgets(cmd, MAXLINE, stdin);
        if (got == NULL) { // user pressed ^D
            printf("\n");
            exit(0); 
        }
	if(strlen(cmd) == MAXLINE -1) {
	    printf("length of cmd: %d\n", strlen(cmd));
	    if ( (cmd[MAXLINE-2]!="\n") ) {
	        printf("the last character  %c\n",cmd[MAXLINE-2] );
	        fprintf(stderr,"cmd exceeded maximum\n");
		exit(0);
	    }
	}
        tokenize(cmd, argv);
	int i;
	int count=0;
        for( i=0;argv[i]!=NULL; i++){
		if (strcmp(argv[i],"|")==0){
			count++;
			argv[i] = NULL;
			if (count==1){
				musaza(argv, i);
			}else if(count>1){
				musaza2(argv,cmd,i);

		}
	}
        background(argv);
    }
    
}
