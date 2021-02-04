#include<iostream>
using namespace std;

int main()
{
	int *p,*array, **marray, size,a;
	cin>>size;

	a=920;
	p = new int;
	*p = 892300;

	//allocating dynamically
	
	array = new int[size]();
	marray = new int*[size];
	
	for(int i=1;i<=size;i++)
		array[i-1] = i;

	for (int i=0;i<size;i++)
		cout<<array[i]<<' '; cout<<endl;
	

	for(int i=0;i<size;i++)
		marray[i] = new int[size-1]();

	int sum=1;
	for(int i=0;i<size;i++)
		for(int j=0;j<size-1;j++)
			marray[i][j]=sum++;

	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-1;j++)
			cout<<marray[i][j]<<' ';
		cout<<endl;
	}

	//now, freeing allocated memory

	delete p;
	delete [] array ;

	for(int i=0;i<size;i++)
		delete [] marray[i];
	delete [] marray;


	return 0;
}
