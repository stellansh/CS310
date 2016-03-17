#include <stdio.h>
int upper(int c);

int main(){
printf("%c\n",upper(98));

}

int upper(int c){
if (c>='a'&& c<='z'){
return (c+'A'-'a');
}
return c;
}


