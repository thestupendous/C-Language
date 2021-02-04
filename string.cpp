#include<iostream>
#include<string>
using namespace std;

int main()
{
	string a,b;
	a= "aaa";
	b="aaaaaaaaaaaa";

	cout<< ( (a<b)? "yes\n" : "no\n" ); 

	string c,d;

	c = "x" + b;

	d = a + c;
	cout<<d<<endl;

	return 0;
}
