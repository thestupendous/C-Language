#include<stdio.h>


int fact(int n)
{
	if (n>0)
		return n * fact(n-1);
	else
		return 1;
}


int main()
{
	printf("fact of 1 ,4 , 5 ,6 -> %d , %d , %d , %d\n",fact(1),fact(4),fact(5),fact(6));

	return 0;
}
