#include<iostream>
using namespace std;


int main()
{
	int a=923;

	const  int * const p = &a;

	cout<<"a is p is "<<*p<<endl;


	return 0;
}
