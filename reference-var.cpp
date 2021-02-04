#include<iostream>

using namespace std;
int& fun(int &num){
	return num;
}

int main()
{
	int i=234;
	int &j = i;

	int &k=j;

	int a=1,b=2;
	//int &c = a+b; //Error
	const int &c = a+b;
	const int &d = 8+2;

	cout<< j << endl;
	cout<< k << endl;
	cout<< c << endl;
	cout<< d << endl;

	fun(a) = 90;
	cout<< &(fun(a)) << endl;
	cout<< a <<endl;


	return 0;
}
