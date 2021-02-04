#include<stdio.h>

typedef struct empl{
	char * name;
	unsigned int age;
	char * email;
} Emp;


int main(){

	Emp em1 = {"John Doe", 35, "johndoe@johnmail.com"};

	em1.age += 1;

	printf("employee details \nName : %s\nAge : %d\nemail : %s\n",em1.name,em1.age,em1.email);

	return 0;
}

