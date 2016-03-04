#include<stdio.h>
struct employee{
	char name;
	char address;
	int SSN;
	int age;
	char gender;
	char department;
	int salary;

void Display(struct employee e){
      printf("Output\nName: %s",e.name);
      printf("\SSN: %d",e.SSN);

      printf("\age: %d",e.age);

      printf("\gender: %d",e.gender);
      printf("\adepartment: %d",e.department);
      printf("\salary: %d",e.rsalary);
}
int main(){
    struct employee emp;
    
    Display(emp);  
}


