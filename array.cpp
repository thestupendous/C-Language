#include<iostream>
using namespace std;
#define size 5

int main()
{

	int a[size] = {3,2,5,0,1};

	for (int i=0;i<size;i++)
	{
		cout<<i <<' ';
	}


	int *b;
	
	//dynamic allocation using malloc
	b = (int *) malloc ( sizeof(int) * size);

	//dynamic allocation using new
	int c[] = new int[size];	



	return 0;
}
