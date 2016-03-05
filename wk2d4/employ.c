#include<stdio.h>
#include<string.h>
struct employee{
	char* name;
	char* address;
	int SSN;
	int age;
	char* gender;
	char* department;
	int salary;
}employee;


void Display( employee e){
      printf("Output\nName: %s",e.name);
      printf("SSN: %d",e.SSN);

      printf("age: %d",e.age);

      printf("gender: %d",e.gender);
      printf("department: %d",e.department);
      printf("salary: %d",e.salary);
}
int main(){
	employee emp ={"stella","adress 3","207",24,"female","math",20000};
	Display(x);
    
    Display(emp);  
}


