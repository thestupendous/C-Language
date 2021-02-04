#include<stdio.h>
int main(){
	typedef int x[2];
	x a[3] = {1,2,3,4}; //1
	printf("%lu",sizeof(a)); //2
	printf(" %d",a[1][0]); //3
	return 0;
}
